DROP TABLE IF EXISTS t1;
CREATE TABLE t1( i INT) $$
INSERT INTO t1 VALUES (1), (2);
SELECT COUNT(*) = 2 FROM t1;

TRUNCATE TABLE t1;
SELECT COUNT(*) = 0 FROM t1;

INSERT INTO t1 VALUES (3), (4);
SELECT COUNT(*) = 2 FROM t1;

TRUNCATE t1;
TRUNCATE TABLE t1;
SELECT COUNT(*) = 0 FROM t1;

DROP TABLE t1;
