/*
* Author: Rongyang Sun <sun-rongyang@outlook.com>
* Creation Date: 2020-04-23 21:51
* 
* Description: MyCplx project. The main header file.
*/


/** @file mycplx.h
 *  The main header file of %MyCplx project.
 *  This file contains all the declarations of public APIs.
 */


/** The namespace used by %MyCplx project.
 *
 *  The namespace of the project. All the public APIs are declared and defined under this namespace.
 */
namespace mycplx {


/** My complex number.
 *  The complex number defined by %MyCplx project.
 */
class MyCplx {
public:
  /** Default constructor.
   */
  MyCplx(void) : real(0.0), imag(0.0) {}

  /** Normal constructor.
   *  Construct a complex using its real part and imaginary part.
   */
  MyCplx(
      const double real_part,   ///< The real part.
      const double imag_part    ///< The imaginary part.
  ) : real(real_part), imag(imag_part) {}

  double real;    ///< Real part of the complex number.
  double imag;    ///< Imaginary part of the complex number.
};


} /* mycplx */ 
