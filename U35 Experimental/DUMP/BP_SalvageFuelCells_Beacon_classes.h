// BlueprintGeneratedClass BP_SalvageFuelCells_Beacon.BP_SalvageFuelCells_Beacon_C
// Size: 0x2d0 (Inherited: 0x220)
struct ABP_SalvageFuelCells_Beacon_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_Light032; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_Light031; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_Light02; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_Light03; 
	UPROPERTY(BlueprintReadWrite) UWidgetComponent* Widget; 
	UPROPERTY(BlueprintReadWrite) UWidgetComponent* Widget1; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* Hologram; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMeshComponent0; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMeshComponent03; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMeshComponent02; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* GlowingBit; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* GFX; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* Scene; 
	UPROPERTY(BlueprintReadWrite) float Light_Animation_0_1_Anim_6890D32F4D56C12E56512AB0CF2EC95B; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Light_Animation__Direction_6890D32F4D56C12E56512AB0CF2EC95B; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Light Animation; 
	UPROPERTY(BlueprintReadWrite) float LightIntensity; 
	UPROPERTY(BlueprintReadWrite) FLinearColor LightColor; 
	UPROPERTY(BlueprintReadWrite) float GlowAdd; 
	UPROPERTY(BlueprintReadWrite) FName NewVar_1; 

	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void Light Animation__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Light Animation__UpdateFunc();
	UFUNCTION(BlueprintCallable) void ReceiveTick(float DeltaSeconds);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_SalvageFuelCells_Beacon(int32_t EntryPoint);
};

