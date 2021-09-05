// BlueprintGeneratedClass BP_EscortGarage_Beacon.BP_EscortGarage_Beacon_C
// Size: 0x269 (Inherited: 0x220)
struct ABP_EscortGarage_Beacon_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USkeletalMeshComponent* SkeletalMesh; // 0x228(0x08)
	USceneComponent* Scene; // 0x230(0x08)
	float FadeIn_Opacity_8E81A0E64677DBDCECDF68BB3B6D6B18; // 0x238(0x04)
	enum class ETimelineDirection FadeIn__Direction_8E81A0E64677DBDCECDF68BB3B6D6B18; // 0x23c(0x01)
	UTimelineComponent* FadeIn; // 0x240(0x08)
	float Fade_Opacity_F448C4A14DA9AD497475EFA962EB36DF; // 0x248(0x04)
	enum class ETimelineDirection Fade__Direction_F448C4A14DA9AD497475EFA962EB36DF; // 0x24c(0x01)
	UTimelineComponent* Fade; // 0x250(0x08)
	TArray<UMaterialInstanceDynamic*> Materials; // 0x258(0x10)
	bool FadingOut; // 0x268(0x01)

	void OnRep_FadingOut();
	void Fade__FinishedFunc();
	void Fade__UpdateFunc();
	void Fadein__FinishedFunc();
	void Fadein__UpdateFunc();
	void ReceiveBeginPlay();
	void FadeOut();
	void ExecuteUbergraph_BP_EscortGarage_Beacon(int32_t EntryPoint);
};

