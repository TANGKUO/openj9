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


   void group_java_lang_Math_exp() {
      int i=0, groupNum=35,numTests=132;
      int testsPassed=0, testsFailed=0;
      unsigned int op_0 [] = {
         0x00000000,0x7ff00000, 
         0x0,0x0, 
         0x00000000,0x80000000, 
         0x00000000,0xfff00000, 
         0x00000000,0x7ff80000, 
         0xf95ac4e8,0x3fd58139, 
         0xca24770c,0x3fd4d753, 
         0xe2ee80f8,0x3fe1f1b5, 
         0xb7f0c2cd,0x3fe49c30, 
         0xb0e4050c,0x3fe7d46b, 
         0x09547674,0x3fc0e1f1, 
         0xa53076c8,0x3fd1a461, 
         0x187c4bbf,0x3fe6d154, 
         0xf9d650c2,0x3fe7ba16, 
         0x11a7fd62,0x3fe8ff6c, 
         0x212ad2cc,0x3fda4581, 
         0xe8c22c3c,0x3fd48eb0, 
         0x7edbf5f0,0x3fde27bd, 
         0xdca6b9ac,0x3fc04b98, 
         0x547f8161,0x3fe1d234, 
         0x8232e8e3,0x3fe3af12, 
         0xf31f38d8,0x3fe8cf7c, 
         0x3cd8f2bf,0x3fe87105, 
         0x96cf3360,0x3f932ffb, 
         0x50af46e8,0x3fb378cd, 
         0xd7e968a9,0x3ff921f0, 
         0x54442d18,0xc01921fb, 
         0x54442d1b,0x3ff921fb, 
         0xffffffff,0xffefffff, 
         0xcccccccc,0xffeccccc, 
         0x99999999,0xffe99999, 
         0x66666666,0xffe66666, 
         0x33333333,0xffe33333, 
         0x00000000,0xffe00000, 
         0x9999999a,0xffd99999, 
         0x33333334,0xffd33333, 
         0x9999999c,0xffc99999, 
         0x9999999f,0xffb99999, 
         0x00000000,0xfc980000, 
         0x99999993,0x7fb99999, 
         0x99999996,0x7fc99999, 
         0x33333331,0x7fd33333, 
         0x99999997,0x7fd99999, 
         0xfffffffd,0x7fdfffff, 
         0x33333332,0x7fe33333, 
         0x66666665,0x7fe66666, 
         0x99999998,0x7fe99999, 
         0xcccccccb,0x7feccccc, 
         0xfffffffe,0x7fefffff, 
         0x00000000,0xc32fc000, 
         0xffffffff,0x7fefffff, 
         0x2,0x0, 
         0x9,0x0, 
         0x00000000,0x40000, 
         0x00000000,0x80000, 
         0xfffffffe,0xfffff, 
         0xffffffff,0xfffff, 
         0x00000002,0x80000000, 
         0x00000009,0x80000000, 
         0x00000000,0x80040000, 
         0x00000000,0x80080000, 
         0xfffffffe,0x800fffff, 
         0xffffffff,0x800fffff, 
         0x47ae149b,0x408fb4e1, 
         0xb851eb95,0x4090961e, 
         0x00000000,0xc0863000, 
         0x851eb852,0xc08627eb, 
         0x28f5c132,0x4051ef5c, 
         0x3def12b7,0x3ff0a2b2, 
         0x3e33cae7,0x3ff0a2b2, 
         0x3f8b63d7,0x3ff0a2b2, 
         0xffffffff,0xbfefffff, 
         0xfffffff0,0x3fefffff, 
         0xffffffff,0x3fefffff, 
         0xfffffe14,0x3fefffff, 
         0xc4e8043a,0xc0152c38, 
         0xb06d22f4,0xc014e48a, 
         0x3fc94bea,0xc014da4d, 
         0xcf2574f8,0xc010d00f, 
         0x192c3200,0xc0014e34, 
         0x82c60fb8,0x40124ea8, 
         0xf369e6c2,0x401258e5, 
         0x1c5fa942,0x4014e842, 
         0x0962a17e,0xbff80d0c, 
         0xcbf1fda5,0xbff03601, 
         0x4888e3a9,0x3ff111ac, 
         0x4888e3ab,0x3ff911ac, 
         0x1687291c,0x3fefced9, 
         0x8b439398,0x3fefe76c, 
         0x45a1c8d6,0x3feff3b6, 
         0xd9168540,0x3feff7ce, 
         0x2110f9fe,0xc014eec8, 
         0xb3a09a7b,0x400d7e98, 
         0x2da71340,0xc00295e2, 
         0xf69d5e8e,0x3ffff2f3, 
         0xf369e6ce,0x401058e5, 
         0x4c5f64e4,0xc00e8167, 
         0x4fdf3b6a,0x3fc6978d, 
         0x78d4fdf8,0x3fd126e9, 
         0x4fdf3b69,0x3fd2978d, 
         0x9db22d14,0x3fd6a7ef, 
         0xef9db233,0x3fd7c6a7, 
         0x645a1cb2,0x3fd7df3b, 
         0x9ba5e35a,0x3fd820c4, 
         0x24dd2f21,0x3fd98106, 
         0x645a1cb3,0x3fdbdf3b, 
         0x9ba5e35b,0x3fdc20c4, 
         0xc28f5c30,0x3fdc28f5, 
         0x7ef9db2a,0x3fdcbc6a, 
         0x1cac0839,0x3fdf645a, 
         0x26e978d8,0x3fe00831, 
         0x083126ea,0x3fe01cac, 
         0x5810623c,0x3fe0b439, 
         0x7ef9db10,0x3fe0bc6a, 
         0x353f7cbc,0x3fe1ba5e, 
         0xef9db1fa,0x3fe1c6a7, 
         0xa9fbe738,0x3fe1d2f1, 
         0x3d70a3a2,0x3fe1d70a, 
         0x083126ac,0x3fe21cac, 
         0xe353f782,0x3fe29ba5, 
         0xed916812,0x3fe33f7c, 
         0xdf3b63f0,0x3fe38d4f, 
         0x72b0205a,0x3fe39168, 
         0x9999992e,0x3fe39999, 
         0xba5e34c6,0x3fe40c49, 
         0xae147a4e,0x3fe4e147, 
         0xb22d0da2,0x3fe5ef9d, 
         0x851eb792,0x3fe651eb, 
         0xb439574c,0x3fe676c8, 
         0x4dd2f0b4,0x3fe81062, 
         0x374bc5ac,0x3fe84189, 
         0x126e9644,0x3feac083, 
         0x0, 0x0};
      unsigned int result [] = {
         0x00000000,0x7ff00000, 
         0x00000000,0x3ff00000, 
         0x00000000,0x3ff00000, 
         0x0,0x0, 
         0x00000000,0x7ff80000, 
         0x73081452,0x3ff663c3, 
         0x1af76d6a,0x3ff628a2, 
         0xe53d1b82,0x3ffc082c, 
         0xdbceb852,0x3ffe77a2, 
         0xe7cb96d1,0x4000d89c, 
         0x64992e83,0x3ff2417d, 
         0x305f354f,0x3ff5140f, 
         0xacf27b96,0x40005259, 
         0x01bc684b,0x4000cac6, 
         0x7ff1a047,0x400178ed, 
         0xdc1330a1,0x3ff81ef6, 
         0x3fc11af9,0x3ff60f8a, 
         0xe8eed700,0x3ff9a148, 
         0xa51e0062,0x3ff22c18, 
         0x0dbdbe1b,0x3ffbeca1, 
         0x77314f0c,0x3ffd991c, 
         0xe3b81787,0x40015ed4, 
         0xbd7f3de1,0x40012bd8, 
         0x2a3e37dc,0x3ff04d79, 
         0x749e4b2e,0x3ff143b4, 
         0x2c17fc98,0x40133de1, 
         0x5d6dff5e,0x3f5e989f, 
         0xc8559363,0x40133ded, 
         0x0,0x0, 
         0x0,0x0, 
         0x0,0x0, 
         0x0,0x0, 
         0x0,0x0, 
         0x0,0x0, 
         0x0,0x0, 
         0x0,0x0, 
         0x0,0x0, 
         0x0,0x0, 
         0x0,0x0, 
         0x00000000,0x7ff00000, 
         0x00000000,0x7ff00000, 
         0x00000000,0x7ff00000, 
         0x00000000,0x7ff00000, 
         0x00000000,0x7ff00000, 
         0x00000000,0x7ff00000, 
         0x00000000,0x7ff00000, 
         0x00000000,0x7ff00000, 
         0x00000000,0x7ff00000, 
         0x00000000,0x7ff00000, 
         0x0,0x0, 
         0x00000000,0x7ff00000, 
         0x00000000,0x3ff00000, 
         0x00000000,0x3ff00000, 
         0x00000000,0x3ff00000, 
         0x00000000,0x3ff00000, 
         0x00000000,0x3ff00000, 
         0x00000000,0x3ff00000, 
         0x00000000,0x3ff00000, 
         0x00000000,0x3ff00000, 
         0x00000000,0x3ff00000, 
         0x00000000,0x3ff00000, 
         0x00000000,0x3ff00000, 
         0x00000000,0x3ff00000, 
         0x00000000,0x7ff00000, 
         0x00000000,0x7ff00000, 
         0xfd28b3c3,0x33802, 
         0x444ff378,0x8d668, 
         0x8bfbd36e,0x46669c5f, 
         0x64a8def6,0x4006a09e, 
         0x650a0e12,0x4006a09e, 
         0x66eff99e,0x4006a09e, 
         0x362cef38,0x3fd78b56, 
         0x8b14575e,0x4005bf0a, 
         0x8b145769,0x4005bf0a, 
         0x8b14561b,0x4005bf0a, 
         0x1e712c5e,0x3f7495db, 
         0xaea6785f,0x3f7613f6, 
         0x4bc2a102,0x3f764cc4, 
         0x789decc5,0x3f8e9cff, 
         0x3a9c0c88,0x3fbd6de9, 
         0xd7cab944,0x40584d12, 
         0xafecbafe,0x40588b98, 
         0x390d728e,0x4067465c, 
         0xd421440a,0x3fcc7846, 
         0xd877a092,0x3fd73c62, 
         0x7efe0350,0x40073fb5, 
         0xc638654e,0x40132a5a, 
         0x2b7284fd,0x40059dbd, 
         0x766494b2,0x4005ae5d, 
         0x66e78c61,0x4005b6b2, 
         0x17d41045,0x4005b97a, 
         0xc28ec00a,0x3f75dbb9, 
         0x77d62aad,0x4043f570, 
         0xbaea74fb,0x3fb913f9, 
         0x9bcb1836,0x401d7654, 
         0x45a519c2,0x404dc663, 
         0x37115eb6,0x3f969b8c, 
         0x445ef40a,0x3ff316ab, 
         0xd5ae21ef,0x3ff4eae4, 
         0xa3454ac0,0x3ff564be, 
         0x182bccd1,0x3ff6cbcc, 
         0x91d3829f,0x3ff732d2, 
         0xc9e9d92e,0x3ff73bbc, 
         0x78172670,0x3ff75393, 
         0xe54f49e6,0x3ff7d55a, 
         0x64836c6a,0x3ff8bb55, 
         0xa97df31f,0x3ff8d4b5, 
         0x863c4f1f,0x3ff8d7e3, 
         0xd87dab88,0x3ff91162, 
         0xa16518f2,0x3ffa214f, 
         0x3ab98d23,0x3ffa67eb, 
         0xfd6adc01,0x3ffa78d6, 
         0xd280fdba,0x3ffaf760, 
         0xf8956d06,0x3ffafe48, 
         0xdd9260d7,0x3ffbd7db, 
         0x0464cf18,0x3ffbe28f, 
         0x47d6db41,0x3ffbed46, 
         0x9dd804b8,0x3ffbf0d9, 
         0x8e4240aa,0x3ffc2de8, 
         0x5649c322,0x3ffc9e98, 
         0x238ad31e,0x3ffd329a, 
         0xfde94ba5,0x3ffd79f2, 
         0x1d66a703,0x3ffd7db9, 
         0xcf86b4dd,0x3ffd8546, 
         0x93290a3f,0x3ffdefd2, 
         0xe5d32440,0x3ffeb9b1, 
         0xdd32496a,0x3fffc197, 
         0x35cb184e,0x400011de, 
         0x10b3340a,0x4000246c, 
         0xc2ed6bbf,0x4000f84b, 
         0xa89b1b28,0x40011270, 
         0x56a7525e,0x400274fb, 
         0x0, 0x0};
      double *p0=(double *) op_0;
      double *erp=(double*) result, r, *rp=&r;
      for (i=0; i<numTests; i++) {
         r = java_lang_Math_exp(*(p0));
         if ( IS_DNAN(erp) ){
            if ( !(IS_DNAN(&r)) ){
               printf("%d.%d: op_0=0x%08x%08x Expected=0x%08x%08x Actual=0x%08x%08x \n",
                  groupNum, i, 
                  *((int *)p0+1), *(int *)p0, *((int *) erp + 1), *(int *)erp, *((int *) &r + 1), *(int *)&r);
               testsFailed++;
            } else {
               testsPassed++;
            }

         } else {
            if (HIWORD(&r) != HIWORD(erp) || abs(LOWORD(&r) - LOWORD(erp)) > 1) {
               printf("%d.%d: op_0=0x%08x%08x Expected=0x%08x%08x Actual=0x%08x%08x \n",
                  groupNum, i, 
                  *((int *)p0+1), *(int *)p0, *((int *) erp + 1), *(int *)erp, *((int *) &r + 1), *(int *)&r);
               testsFailed++;
            } else {
               testsPassed++;
            }
         }

         p0++;erp++;
      }
      printf("[%d] %s Passed %d Failed %d Total %d \n", groupNum,"java_lang_Math_exp", testsPassed, testsFailed, numTests);
      totalNumTest +=numTests; totalTestsPassed +=testsPassed; totalTestsFailed +=testsFailed;
   }

