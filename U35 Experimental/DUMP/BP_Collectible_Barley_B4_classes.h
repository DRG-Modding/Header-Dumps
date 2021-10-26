// BlueprintGeneratedClass BP_Collectible_Barley_B4.BP_Collectible_Barley_B4_C
// Size: 0x300 (Inherited: 0x270)
struct ABP_Collectible_Barley_B4_C : ABP_Collectible_Barley_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Fruit4; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Stem4; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Fruit3; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Stem3; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Fruit2; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Stem2; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Fruit1; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Stem1; 
	UPROPERTY(BlueprintReadWrite) float Timeline_3_NewCurveBase_F2EAE79A48FEF78FA29C98A2B8B2415B; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Timeline_3__Direction_F2EAE79A48FEF78FA29C98A2B8B2415B; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Timeline_4; 
	UPROPERTY(BlueprintReadWrite) float Timeline_2_NewCurveBase_9EB4F50B457A613DE634CDA4A4D41FE0; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Timeline_2__Direction_9EB4F50B457A613DE634CDA4A4D41FE0; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Timeline_3; 
	UPROPERTY(BlueprintReadWrite) float Timeline_1_NewCurveBase_7B9675034F5062F142FD908FD2344343; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Timeline_1__Direction_7B9675034F5062F142FD908FD2344343; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Timeline_2; 
	UPROPERTY(BlueprintReadWrite) float Timeline_0_NewCurveBase_0AC282ED4312AED5464F70ACB4C3BD8F; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Timeline_0__Direction_0AC282ED4312AED5464F70ACB4C3BD8F; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Timeline_1; 

	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void Timeline_0__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Timeline_0__UpdateFunc();
	UFUNCTION(BlueprintCallable) void Timeline_1__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Timeline_1__UpdateFunc();
	UFUNCTION(BlueprintCallable) void Timeline_2__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Timeline_2__UpdateFunc();
	UFUNCTION(BlueprintCallable) void Timeline_3__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Timeline_3__UpdateFunc();
	UFUNCTION(BlueprintCallable) void PickedUp();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Collectible_Barley_B4(int32_t EntryPoint);
};

