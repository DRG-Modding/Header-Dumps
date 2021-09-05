// BlueprintGeneratedClass BP_New_SnowStorm.BP_New_SnowStorm_C
// Size: 0x2d8 (Inherited: 0x2b0)
struct ABP_New_SnowStorm_C : ABP_WeatherEffect_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	float Fadeout_OneToZero_321EE05E466F9B8147EEF89FEA0B8335; // 0x2b8(0x04)
	enum class ETimelineDirection Fadeout__Direction_321EE05E466F9B8147EEF89FEA0B8335; // 0x2bc(0x01)
	UTimelineComponent* FadeOut; // 0x2c0(0x08)
	float Fadein_ZeroToOne_A0FCF2DB48CDF89D5DB4DC99F95711E6; // 0x2c8(0x04)
	enum class ETimelineDirection Fadein__Direction_A0FCF2DB48CDF89D5DB4DC99F95711E6; // 0x2cc(0x01)
	UTimelineComponent* FadeIn; // 0x2d0(0x08)

	void Fadein__FinishedFunc();
	void Fadein__UpdateFunc();
	void Fadeout__FinishedFunc();
	void Fadeout__UpdateFunc();
	void StartEffect();
	void EndEffect();
	void ExecuteUbergraph_BP_New_SnowStorm(int32_t EntryPoint);
};

