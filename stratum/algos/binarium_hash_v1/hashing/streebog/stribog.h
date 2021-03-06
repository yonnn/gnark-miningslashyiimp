/*
 * stribog.h
 *
 *  Created on: Feb 15, 2013
 *      Author: Oleksandr Kazymyrov
 *		Acknowledgments: Oleksii Shevchuk
 */

#ifndef STRIBOG_H_
#define STRIBOG_H_

#ifdef __cplusplus
extern "C"{
#endif

void hash_512(const unsigned char *message,unsigned long long length,unsigned char *hash);
void hash_256(const unsigned char *message,unsigned long long length,unsigned char *hash);

#ifdef __cplusplus
}
#endif

#endif /* STRIBOG_H_ */
