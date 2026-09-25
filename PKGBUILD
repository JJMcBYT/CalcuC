pkgname="CalcuC"
pkgver="1.1.0"
pkgrel="1"
pkgdesc="A small, lightweight, dual-term calculator; written in C"
arch=("x86_64")
license=("custom")
source=("CalcuC")
sha512sums=("SKIP")
package() {
	mkdir -p "${pkgdir}/usr/bin"
	cp "${srcdir}/CalcuC" "${pkgdir}/usr/bin/CalcuC"
	chmod 755 "${pkgdir}/usr/bin/CalcuC"
}
