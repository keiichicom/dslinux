
extern void ipt_tcp_init(void);
extern void ipt_udp_init(void);
extern void ipt_icmp_init(void);
extern void ipt_standard_init(void);
extern void ipt_authd_init(void);
void init_extensions(void) {
	ipt_tcp_init();
	ipt_udp_init();
	ipt_icmp_init();
	ipt_standard_init();
	ipt_authd_init();
}
