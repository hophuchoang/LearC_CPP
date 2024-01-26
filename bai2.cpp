/*
	Bai 1 kiem tra Khoa C/C++
*/
#include <stdio.h>
#include <math.h>


class PtBacHai
{
private:
	float a;
	float b;
	float c;

public:
	PtBacHai() {};
	PtBacHai(float _a, float _b, float _c) {
		a = _a; 
		b = _b;
		c = _c;
	}
	~PtBacHai() {};

	void set_abc(float _a, float _b, float _c) {
		a = _a;
		b = _b; 
		c = _c;
	}

	void set_a(float _a) {
		a = _a;
	}

	void set_b(float _b) {
		b = _b;
	}

	void set_c(float _c) {
		c = _c;
	}

	void Giai_b2() {
		if (a != 0) {
			float delta = b * b - 4 * a * c;
			printf("delta = %f\r\n", delta);
			if (delta < 0)
				printf("phuong trinh vo nghiem\r\n");
			else if (delta == 0)
				printf("phuong trinh co nghiem x = %f\r\n", (-b) / (2 * a));
			else
				printf("phuong trinh co 2 nghiem x1 = %f va x2 = %f\r\n", ((-b) - sqrt(delta)) / (2 * a), ((-b) + sqrt(delta)) / (2 * a));
		}
		else {
			if (b != 0) {
				printf("phuong trinh co nghiem x = %f\r\n", (-c) / b);
			}
			else {
				if (c == 0) {
					printf("phuong trinh co vo so nghiem\r\n");
				}
				else {
					printf("phuong trinh vo nghiem\r\n");
				}
			}
		}
	}
};


int main() {
	PtBacHai a(1, -1, -2);
	a.Giai_b2();
	return 0;
}
