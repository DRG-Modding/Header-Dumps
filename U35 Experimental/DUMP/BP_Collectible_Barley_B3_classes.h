// BlueprintGeneratedClass BP_Collectible_Barley_B3.BP_Collectible_Barley_B3_C
// Size: 0x2e0 (Inherited: 0x270)
struct ABP_Collectible_Barley_B3_C : ABP_Collectible_Barley_Base_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Fruit3; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Stem3; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Fruit2; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Stem2; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Fruit1; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Stem1; 
	UPROPERTY(BlueprintReadWrite) float Timeline_2_NewCurveBase_1FDF43BE4AF07E2CE6F71CAF12F09ACD; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Timeline_2__Direction_1FDF43BE4AF07E2CE6F71CAF12F09ACD; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Timeline_3; 
	UPROPERTY(BlueprintReadWrite) float Timeline_1_NewCurveBase_7A5054814387413FA1615C9F5DFBC685; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Timeline_1__Direction_7A5054814387413FA1615C9F5DFBC685; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Timeline_2; 
	UPROPERTY(BlueprintReadWrite) float Timeline_0_NewCurveBase_ACC981FB454397383DE59DB39B566683; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Timeline_0__Direction_ACC981FB454397383DE59DB39B566683; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Timeline_1; 

	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void Timeline_0__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Timeline_0__UpdateFunc();
	UFUNCTION(BlueprintCallable) void Timeline_1__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Timeline_1__UpdateFunc();
	UFUNCTION(BlueprintCallable) void Timeline_2__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Timeline_2__UpdateFunc();
	UFUNCTION(BlueprintCallable) void PickedUp();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Collectible_Barley_B3(int32_t EntryPoint);
};

