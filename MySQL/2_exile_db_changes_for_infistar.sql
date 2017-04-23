/* FOR "USE_DATABASE_WHITELIST" YOU NEED TO RUN THIS QUERY: */
ALTER TABLE `account` ADD `whitelisted` INT(1) UNSIGNED NOT NULL DEFAULT '0';



/* FOR "USE_LOG_TO_DATABASE" YOU NEED TO RUN THIS QUERY: */
CREATE TABLE `infistar_logs` (
	`id` INT(11) NOT NULL AUTO_INCREMENT,
	`servername` TEXT NULL,
	`logname` TEXT NULL,
	`logentry` TEXT NULL,
	`time` TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP,
	PRIMARY KEY (`id`)
)
COLLATE='latin1_swedish_ci'
ENGINE=InnoDB
AUTO_INCREMENT=1
;

/* if you already have this table just do the following: */
ALTER TABLE `infistar_logs` ADD `servername` TEXT NULL;