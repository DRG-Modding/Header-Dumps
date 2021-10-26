// BlueprintGeneratedClass BP_EscortGarage_Beacon.BP_EscortGarage_Beacon_C
// Size: 0x269 (Inherited: 0x220)
struct ABP_EscortGarage_Beacon_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* Scene; 
	UPROPERTY(BlueprintReadWrite) float FadeIn_Opacity_8E81A0E64677DBDCECDF68BB3B6D6B18; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection FadeIn__Direction_8E81A0E64677DBDCECDF68BB3B6D6B18; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* FadeIn; 
	UPROPERTY(BlueprintReadWrite) float Fade_Opacity_F448C4A14DA9AD497475EFA962EB36DF; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Fade__Direction_F448C4A14DA9AD497475EFA962EB36DF; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Fade; 
	UPROPERTY(BlueprintReadWrite) TArray<UMaterialInstanceDynamic*> Materials; 
	UPROPERTY(BlueprintReadWrite) bool FadingOut; 

	UFUNCTION(BlueprintCallable) void OnRep_FadingOut();
	UFUNCTION(BlueprintCallable) void Fade__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Fade__UpdateFunc();
	UFUNCTION(BlueprintCallable) void Fadein__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Fadein__UpdateFunc();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void FadeOut();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_EscortGarage_Beacon(int32_t EntryPoint);
};

