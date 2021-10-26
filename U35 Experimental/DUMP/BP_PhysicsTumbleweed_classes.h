// BlueprintGeneratedClass BP_PhysicsTumbleweed.BP_PhysicsTumbleweed_C
// Size: 0x2b8 (Inherited: 0x294)
struct ABP_PhysicsTumbleweed_C : ABP_Phys_KickableObject_Base_C {
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* TumbleWeedModel; 
	UPROPERTY(BlueprintReadWrite) TArray<UStaticMesh*> StatichMeshOptions; 

	UFUNCTION(BlueprintCallable) void UserConstructionScript();
};

