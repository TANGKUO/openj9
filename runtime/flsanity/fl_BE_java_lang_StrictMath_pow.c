/*******************************************************************************
 * Copyright (c) 2002, 2014 IBM Corp. and others
 *
 * This program and the accompanying materials are made available under
 * the terms of the Eclipse Public License 2.0 which accompanies this
 * distribution and is available at https://www.eclipse.org/legal/epl-2.0/
 * or the Apache License, Version 2.0 which accompanies this distribution and
 * is available at https://www.apache.org/licenses/LICENSE-2.0.
 *
 * This Source Code may also be made available under the following
 * Secondary Licenses when the conditions for such availability set
 * forth in the Eclipse Public License, v. 2.0 are satisfied: GNU
 * General Public License, version 2 with the GNU Classpath
 * Exception [1] and GNU General Public License, version 2 with the
 * OpenJDK Assembly Exception [2].
 *
 * [1] https://www.gnu.org/software/classpath/license.html
 * [2] http://openjdk.java.net/legal/assembly-exception.html
 *
 * SPDX-License-Identifier: EPL-2.0 OR Apache-2.0
 *******************************************************************************/
#define true 1
#define false 0
#include "floatsanityg.h"


   void group_java_lang_StrictMath_pow() {
      int i=0, groupNum=58,numTests=33;
      int testsPassed=0, testsFailed=0;
      unsigned int op_0 [] = {
         0x3fe9714b, 0xcf50de85,
         0x3fdc04b6, 0x788aa740,
         0x3fe41b58, 0x8169c12c,
         0x3fded48b, 0x71791c4c,
         0x3fdd8668, 0x81d49d4e,
         0x3fedf595, 0x61d869d3,
         0x3fe4f24f, 0x5fd8620d,
         0x3fd32a55, 0x213bbd8c,
         0x3fea71c9, 0x1cd9120b,
         0x3fa533dd, 0x98f095c0,
         0x3fee3167, 0x608b9281,
         0x3fe12d09, 0x2174fde4,
         0x3fed0b03, 0x1272716c,
         0x3fe0997a, 0xc994ed1e,
         0x3febdced, 0xcc3eee8c,
         0x3fe32f5a, 0xa37d5dd7,
         0x3fc919ef, 0x6a103c4c,
         0x3fd4d15f, 0x93162414,
         0x3fe4c206, 0x230350ca,
         0x3fe3b01f, 0x6e5f5fdf,
         0xc0080000, 0x00000000,
         0x80000000, 0x00000000,
         0xfff00000, 0x00000000,
         0x40000000, 0x00000000,
         0xc077d428, 0xf5c28f30,
         0xc0736e14, 0x7ae14780,
         0x4063ca3d, 0x70a3d766,
         0x4087468f, 0x5c28f5df,
         0x408c6851, 0xeb851ed7,
         0x408f570a, 0x3d70a3f7,
         0x4090961e, 0xb851eb95,
         0x4095e6cc, 0xccccccdf,
         0x4097eaeb, 0x851eb865,
         0x0, 0x0};
      unsigned int op_1 [] = {
         0x3fe2bbe0, 0xe180da96,
         0x3fd56c62, 0xe02f455c,
         0x3fc10dad, 0x63ed43dc,
         0x3fde5af6, 0x22c984f8,
         0x3fb89bd7, 0x99752d58,
         0x3fc6358d, 0x3a72c068,
         0x3fdc37bd, 0x366d4f48,
         0x3fe0a100, 0x06105786,
         0x3fecf1a4, 0xc4332aa2,
         0x3fe64237, 0x9d2990f6,
         0x3fe70352, 0x8e82ac11,
         0x3fe88a89, 0xae7c35a8,
         0x3fdf9ea5, 0x7963412c,
         0x3fe76292, 0x2cc2e835,
         0x3fe27f8c, 0x0671a88f,
         0x3fd4cf74, 0xd19fb7c6,
         0x3f8c7d6b, 0xcd670040,
         0x3fe35d33, 0x9446083f,
         0x3fe2c66a, 0x93ca7041,
         0x3fedaa7d, 0xe0a1b871,
         0x7ff00000, 0x00000000,
         0x40080000, 0x00000000,
         0xc0080000, 0x00000000,
         0xc08ff800, 0x00000000,
         0xc0340000, 0x00000000,
         0xc0340000, 0x00000000,
         0x40338000, 0x00000000,
         0xbfd00000, 0x00000000,
         0x40338000, 0x00000000,
         0x40338000, 0x00000000,
         0xbfd00000, 0x00000000,
         0x40234000, 0x00000000,
         0xc0340000, 0x00000000,
         0x0, 0x0};
      unsigned int result [] = {
         0x3febfade, 0xa2c65e30,
         0x3fe84512, 0x511a26c8,
         0x3fee1438, 0xf0e2bdad,
         0x3fe6a17c, 0xa3c61062,
         0x3fedb4df, 0x68d1ad63,
         0x3fefa2de, 0xb7904e02,
         0x3fea8be7, 0x4bd05bc3,
         0x3fe119e8, 0xbc598ec3,
         0x3feaee33, 0x8413b212,
         0x3fbbf25e, 0x57b041cb,
         0x3feeb09e, 0x1ef1b465,
         0x3fe3db52, 0x2353431c,
         0x3fee80d4, 0xb2e4b05a,
         0x3fe3cecf, 0x414c24e3,
         0x3fed89f9, 0x7969a96c,
         0x3feb1889, 0x0115d7a6,
         0x3fef486f, 0x5a71df5b,
         0x3fe037dc, 0xbe5f94b5,
         0x3fe8d2dc, 0xb93bab52,
         0x3fe465e2, 0x9207c272,
         0x7ff00000, 0x00000000,
         0x80000000, 0x00000000,
         0x80000000, 0x00000000,
         0x80000, 0x00000000,
         0x3536be4b, 0xf32c01fb,
         0x35950cb1, 0xcadce763,
         0x48d6536c, 0x03c325be,
         0x3fc88072, 0xcf42cf6f,
         0x4be91add, 0x58b1583f,
         0x4c155044, 0xab7671cb,
         0x3fc66cba, 0x04bdebd0,
         0x46386a82, 0x970bbc5c,
         0x32b51c65, 0x572b061b,
         0x0, 0x0};
      double *p0=(double *) op_0;
      double *p1=(double *) op_1;
      double *erp=(double*) result, r, *rp=&r;
      for (i=0; i<numTests; i++) {
         r = java_lang_StrictMath_pow(*(p0), *(p1));
         if ( IS_DNAN(erp) ){
            if ( !(IS_DNAN(&r)) ){
               printf("%d.%d: op_0=0x%08x%08x , op_1=0x%08x%08x Expected=0x%08x%08x Actual=0x%08x%08x \n",
                  groupNum, i, 
                  *(int *)p0, *((int *)p0+1), *(int *)p1, *((int *)p1+1), *(int *)erp, *((int *) erp + 1), *(int *)&r, *((int *) &r + 1));
               testsFailed++;
            } else {
               testsPassed++;
            }

         } else {
            if ( (HIWORD(&r) != HIWORD(erp)) || (LOWORD(&r) != LOWORD(erp)) ){
               printf("%d.%d: op_0=0x%08x%08x , op_1=0x%08x%08x Expected=0x%08x%08x Actual=0x%08x%08x \n",
                  groupNum, i, 
                  *(int *)p0, *((int *)p0+1), *(int *)p1, *((int *)p1+1), *(int *)erp, *((int *) erp + 1), *(int *)&r, *((int *) &r + 1));
               testsFailed++;
            } else {
               testsPassed++;
            }
         }

         p0++;p1++;erp++;
      }
      printf("[%d] %s Passed %d Failed %d Total %d \n", groupNum,"java_lang_StrictMath_pow", testsPassed, testsFailed, numTests);
      totalNumTest +=numTests; totalTestsPassed +=testsPassed; totalTestsFailed +=testsFailed;
   }

