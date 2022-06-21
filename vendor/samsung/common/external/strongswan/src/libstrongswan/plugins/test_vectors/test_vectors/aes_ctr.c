/*
 * Copyright (C) 2010 Martin Willi
 * Copyright (C) 2010 revosec AG
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the Licenseor (at your
 * option) any later version.  See <http://www.fsf.org/copyleft/gpl.txt>.
 *
 * This program is distributed in the hope that it will be usefulbut
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */

#include <crypto/crypto_tester.h>

/**
 * Test 1 of RFC3686
 */
crypter_test_vector_t aes_ctr1 = {
	.alg = ENCR_AES_CTR, .key_size = 16, .len = 16,
	.key	= "\xae\x68\x52\xf8\x12\x10\x67\xcc\x4b\xf7\xa5\x76\x55\x77\xf3\x9e"
			  "\x00\x00\x00\x30",
	.iv		= "\x00\x00\x00\x00\x00\x00\x00\x00",
	.plain	= "Single block msg",
	.cipher	= "\xe4\x09\x5d\x4f\xb7\xa7\xb3\x79\x2d\x61\x75\xa3\x26\x13\x11\xb8"
};

/**
 * Test 2 of RFC3686
 */
crypter_test_vector_t aes_ctr2 = {
	.alg = ENCR_AES_CTR, .key_size = 16, .len = 32,
	.key	= "\x7e\x24\x06\x78\x17\xfa\xe0\xd7\x43\xd6\xce\x1f\x32\x53\x91\x63"
			  "\x00\x6c\xb6\xdb",
	.iv		= "\xc0\x54\x3b\x59\xda\x48\xd9\x0b",
	.plain	= "\x00\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0a\x0b\x0c\x0d\x0e\x0f"
			  "\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d\x1e\x1f",
	.cipher	= "\x51\x04\xa1\x06\x16\x8a\x72\xd9\x79\x0d\x41\xee\x8e\xda\xd3\x88"
			  "\xeb\x2e\x1e\xfc\x46\xda\x57\xc8\xfc\xe6\x30\xdf\x91\x41\xbe\x28"
};

/**
 * Test 3 of RFC3686
 */
crypter_test_vector_t aes_ctr3 = {
	.alg = ENCR_AES_CTR, .key_size = 16, .len = 36,
	.key	= "\x76\x91\xbe\x03\x5e\x50\x20\xa8\xac\x6e\x61\x85\x29\xf9\xa0\xdc"
			  "\x00\xe0\x01\x7b",
	.iv		= "\x27\x77\x7f\x3f\x4a\x17\x86\xf0",
	.plain	= "\x00\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0a\x0b\x0c\x0d\x0e\x0f"
			  "\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d\x1e\x1f"
			  "\x20\x21\x22\x23",
	.cipher	= "\xc1\xcf\x48\xa8\x9f\x2f\xfd\xd9\xcf\x46\x52\xe9\xef\xdb\x72\xd7"
			  "\x45\x40\xa4\x2b\xde\x6d\x78\x36\xd5\x9a\x5c\xea\xae\xf3\x10\x53"
			  "\x25\xb2\x07\x2f",
};

/**
 * Test 4 of RFC3686
 */
crypter_test_vector_t aes_ctr4 = {
	.alg = ENCR_AES_CTR, .key_size = 24, .len = 16,
	.key	= "\x16\xaf\x5b\x14\x5f\xc9\xf5\x79\xc1\x75\xf9\x3e\x3b\xfb\x0e\xed"
			  "\x86\x3d\x06\xcc\xfd\xb7\x85\x15"
			  "\x00\x00\x00\x48",
	.iv		= "\x36\x73\x3c\x14\x7d\x6d\x93\xcb",
	.plain	= "Single block msg",
	.cipher	= "\x4b\x55\x38\x4f\xe2\x59\xc9\xc8\x4e\x79\x35\xa0\x03\xcb\xe9\x28",
};

/**
 * Test 5 of RFC3686
 */
crypter_test_vector_t aes_ctr5 = {
	.alg = ENCR_AES_CTR, .key_size = 24, .len = 32,
	.key	= "\x7c\x5c\xb2\x40\x1b\x3d\xc3\x3c\x19\xe7\x34\x08\x19\xe0\xf6\x9c"
			  "\x67\x8c\x3d\xb8\xe6\xf6\xa9\x1a"
			  "\x00\x96\xb0\x3b",
	.iv		= "\x02\x0c\x6e\xad\xc2\xcb\x50\x0d",
	.plain	= "\x00\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0a\x0b\x0c\x0d\x0e\x0f"
			  "\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d\x1e\x1f",
	.cipher	= "\x45\x32\x43\xfc\x60\x9b\x23\x32\x7e\xdf\xaa\xfa\x71\x31\xcd\x9f"
			  "\x84\x90\x70\x1c\x5a\xd4\xa7\x9c\xfc\x1f\xe0\xff\x42\xf4\xfb\x00",
};

/**
 * Test 6 of RFC3686
 */
crypter_test_vector_t aes_ctr6 = {
	.alg = ENCR_AES_CTR, .key_size = 24, .len = 36,
	.key	= "\x02\xbf\x39\x1e\xe8\xec\xb1\x59\xb9\x59\x61\x7b\x09\x65\x27\x9b"
			  "\xf5\x9b\x60\xa7\x86\xd3\xe0\xfe"
			  "\x00\x07\xbd\xfd",
	.iv		= "\x5c\xbd\x60\x27\x8d\xcc\x09\x12",
	.plain	= "\x00\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0a\x0b\x0c\x0d\x0e\x0f"
			  "\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d\x1e\x1f"
			  "\x20\x21\x22\x23",
	.cipher	= "\x96\x89\x3f\xc5\x5e\x5c\x72\x2f\x54\x0b\x7d\xd1\xdd\xf7\xe7\x58"
			  "\xd2\x88\xbc\x95\xc6\x91\x65\x88\x45\x36\xc8\x11\x66\x2f\x21\x88"
			  "\xab\xee\x09\x35",
};

/**
 * Test 7 of RFC3686
 */
crypter_test_vector_t aes_ctr7 = {
	.alg = ENCR_AES_CTR, .key_size = 32, .len = 16,
	.key	= "\x77\x6b\xef\xf2\x85\x1d\xb0\x6f\x4c\x8a\x05\x42\xc8\x69\x6f\x6c"
			  "\x6a\x81\xaf\x1e\xec\x96\xb4\xd3\x7f\xc1\xd6\x89\xe6\xc1\xc1\x04"
			  "\x00\x00\x00\x60",
	.iv		= "\xdb\x56\x72\xc9\x7a\xa8\xf0\xb2",
	.plain	= "Single block msg",
	.cipher	= "\x14\x5a\xd0\x1d\xbf\x82\x4e\xc7\x56\x08\x63\xdc\x71\xe3\xe0\xc0",
};

/**
 * Test 8 of RFC3686
 */
crypter_test_vector_t aes_ctr8 = {
	.alg = ENCR_AES_CTR, .key_size = 32, .len = 32,
	.key	= "\xf6\xd6\x6d\x6b\xd5\x2d\x59\xbb\x07\x96\x36\x58\x79\xef\xf8\x86"
			  "\xc6\x6d\xd5\x1a\x5b\x6a\x99\x74\x4b\x50\x59\x0c\x87\xa2\x38\x84"
			  "\x00\xfa\xac\x24",
	.iv		= "\xc1\x58\x5e\xf1\x5a\x43\xd8\x75",
	.plain	= "\x00\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0a\x0b\x0c\x0d\x0e\x0f"
			  "\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d\x1e\x1f",
	.cipher	= "\xf0\x5e\x23\x1b\x38\x94\x61\x2c\x49\xee\x00\x0b\x80\x4e\xb2\xa9"
			  "\xb8\x30\x6b\x50\x8f\x83\x9d\x6a\x55\x30\x83\x1d\x93\x44\xaf\x1c",
};

/**
 * Test 9 of RFC3686
 */
crypter_test_vector_t aes_ctr9 = {
	.alg = ENCR_AES_CTR, .key_size = 32, .len = 36,
	.key	= "\xff\x7a\x61\x7c\xe6\x91\x48\xe4\xf1\x72\x6e\x2f\x43\x58\x1d\xe2"
			  "\xaa\x62\xd9\xf8\x05\x53\x2e\xdf\xf1\xee\xd6\x87\xfb\x54\x15\x3d"
			  "\x00\x1c\xc5\xb7",
	.iv		= "\x51\xa5\x1d\x70\xa1\xc1\x11\x48",
	.plain	= "\x00\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0a\x0b\x0c\x0d\x0e\x0f"
			  "\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d\x1e\x1f"
			  "\x20\x21\x22\x23",
	.cipher	= "\xeb\x6c\x52\x82\x1d\x0b\xbb\xf7\xce\x75\x94\x46\x2a\xca\x4f\xaa"
			  "\xb4\x07\xdf\x86\x65\x69\xfd\x07\xf4\x8c\xc0\xb5\x83\xd6\x07\x1f"
			  "\x1e\xc0\xe6\xb8",
};
