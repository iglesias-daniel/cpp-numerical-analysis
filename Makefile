CC = gcc
CXX = g++
CFLAGS = -Iinclude -Wall -std=c11 -DLOGGING_ENABLED
CXXFLAGS = -Iinclude -Wall -std=c++17 -DLOGGING_ENABLED

BIN_DIR = bin
SRC_DIR = src
TEST_DIR = test

# === Sources comunes ===
SRCS = $(SRC_DIR)/error.c $(SRC_DIR)/root_finding.c

.PHONY: test testcpp run clean

# === Test en C ===
test:
ifndef NAME
	$(error You must specify NAME=<test_name>)
endif
	$(CC) $(CFLAGS) -o $(BIN_DIR)/test_$(NAME) $(SRCS) $(TEST_DIR)/test_$(NAME).c

# === Test en C++ ===
testcpp:
ifndef NAME
	$(error You must specify NAME=<test_name>)
endif
	$(CXX) $(CXXFLAGS) -o $(BIN_DIR)/test_$(NAME)_cpp $(SRCS) $(TEST_DIR)/test_$(NAME)_cpp.cpp

# === Run cualquier test ===
run:
ifndef NAME
	$(error You must specify NAME=<test_name>)
endif
	@echo "Running test: $(NAME)"
	@if [ -f $(BIN_DIR)/test_$(NAME) ]; then \
		./$(BIN_DIR)/test_$(NAME); \
	elif [ -f $(BIN_DIR)/test_$(NAME)_cpp ]; then \
		./$(BIN_DIR)/test_$(NAME)_cpp; \
	else \
		echo "No compiled test found for $(NAME)"; \
	fi

# === Clean ===
clean:
	rm -f $(BIN_DIR)/test_*