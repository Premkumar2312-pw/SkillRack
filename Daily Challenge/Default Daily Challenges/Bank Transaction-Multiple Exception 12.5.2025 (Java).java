class MaxCreditLimitExceededException extends Exception {
    MaxCreditLimitExceededException(String msg) {
        super(msg);
    }
}

class InsufficientBalance extends Exception {
    InsufficientBalance(String msg) {
        super(msg);
    }
}
