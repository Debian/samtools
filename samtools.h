#ifndef __SAMTOOLS_H__
#define __SAMTOOLS_H__

#include <stdarg.h>

/** 
 *  A simplified version of Mann-Whitney U-test is calculated
 *  by default (no CDF) because it is faster and seems to work
 *  better in machine learning filtering. When enabled by setting
 *  CDF_MWU_TESTS, additional annotations will appear on mpileup's
 *  output (RPB2 in addition to RPB, etc.).
 */
#define CDF_MWU_TESTS 0

const char *samtools_version(void);
void error(const char *format, ...);

#endif
