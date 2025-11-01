#include <gtest/gtest.h>
#include "query_builder.h"

TEST(QueryBuilderTest, SimpleSelect) {
    QueryBuilder qb;
    std::string result = qb.select({"id", "name"}).from("users").where("age > 18").build();
    EXPECT_EQ(result, "SELECT id, name FROM users WHERE age > 18");
}

TEST(QueryBuilderTest, SelectAll) {
    QueryBuilder qb;
    std::string result = qb.select({"*"}).from("products").build();
    EXPECT_EQ(result, "SELECT * FROM products");
}

TEST(QueryBuilderTest, NoWhereClause) {
    QueryBuilder qb;
    std::string result = qb.select({"id"}).from("orders").build();
    EXPECT_EQ(result, "SELECT id FROM orders");
}

TEST(QueryBuilderTest, MultipleCalls) {
    QueryBuilder qb;
    qb.select({"username"});
    qb.from("accounts");
    qb.where("active = 1");
    std::string result = qb.build();
    EXPECT_EQ(result, "SELECT username FROM accounts WHERE active = 1");
}

