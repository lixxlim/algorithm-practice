//// https://www.acmicpc.net/problem/30664

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	return 0;
	while(1)
	{
		char loteria[31];
		scanf("%s", loteria);
		if (strcmp(loteria, "0") == 0) break;
		
		size_t len = strlen(loteria);
		if (len < 20)
		{
			puts((atoll(loteria) % 42) ? "TENTE NOVAMENTE" : "PREMIADO");
			continue;
		}
		
		size_t lenHaf = len / 2;
		char loteria1[len - lenHaf], loteria2[lenHaf];
		strncpy(loteria1, loteria, len - lenHaf);
		strncpy(loteria2, loteria + lenHaf, lenHaf);
		loteria1[len - lenHaf] = '\0';
		loteria2[lenHaf] = '\0';
printf("%s & %s\n", loteria1, loteria2);
//printf("%lld & %lld\n", strtoll("424242424242424", NULL, 10), strtoll("242424242424242", NULL, 10));
		long long ll1 = atoll(loteria1) % 42;
		long long ll2 = atoll(loteria2) % 42;
//printf("%lld & %lld\n", ll1, ll2);
		
		snprintf(loteria, sizeof(loteria), "%lld%0*lld", ll1, (size_t)lenHaf, ll2);
//puts(loteria);
		//puts((atoll(loteria) % 42) ? "TENTE NOVAMENTE" : "PREMIADO");
	}
	
	return 0;
}
