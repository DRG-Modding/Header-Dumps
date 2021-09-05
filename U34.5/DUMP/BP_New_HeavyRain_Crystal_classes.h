// BlueprintGeneratedClass BP_New_HeavyRain_Crystal.BP_New_HeavyRain_Crystal_C
// Size: 0x2d8 (Inherited: 0x2b0)
struct ABP_New_HeavyRain_Crystal_C : ABP_WeatherEffect_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	float Fadeout_OneToZero_A3017D9546A53807B6D05BB6AE0CDCAB; // 0x2b8(0x04)
	enum class ETimelineDirection Fadeout__Direction_A3017D9546A53807B6D05BB6AE0CDCAB; // 0x2bc(0x01)
	UTimelineComponent* FadeOut; // 0x2c0(0x08)
	float Fadein_ZeroToOne_292B154C4E05A9ACA12E6F98823124C0; // 0x2c8(0x04)
	enum class ETimelineDirection Fadein__Direction_292B154C4E05A9ACA12E6F98823124C0; // 0x2cc(0x01)
	UTimelineComponent* FadeIn; // 0x2d0(0x08)

	void Fadein__FinishedFunc();
	void Fadein__UpdateFunc();
	void Fadeout__FinishedFunc();
	void Fadeout__UpdateFunc();
	void StartEffect();
	void EndEffect();
	void ExecuteUbergraph_BP_New_HeavyRain_Crystal(int32_t EntryPoint);
};

