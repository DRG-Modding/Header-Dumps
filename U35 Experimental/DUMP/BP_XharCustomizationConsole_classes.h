// BlueprintGeneratedClass BP_XharCustomizationConsole.BP_XharCustomizationConsole_C
// Size: 0x2a0 (Inherited: 0x220)
struct ABP_XharCustomizationConsole_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UWidgetComponent* Widget3; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Mesh_Monitor4; 
	UPROPERTY(BlueprintReadWrite) UWidgetComponent* Widget1; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Mesh_Monitor2; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Mesh_LockerLeft1; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Mesh_LockerRight1; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* ChildActor; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Mesh_LockerRight; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Mesh_LockerLeft; 
	UPROPERTY(BlueprintReadWrite) UWidgetComponent* Widget; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Mesh_Monitor; 
	UPROPERTY(BlueprintReadWrite) UTextRenderComponent* TextRender; 
	UPROPERTY(BlueprintReadWrite) UBoxComponent* InteractionCollider; 
	UPROPERTY(BlueprintReadWrite) UInstantUsable* InstantUsable; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* DefaultSceneRoot; 

	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_XharCustomizationConsole(int32_t EntryPoint);
};

