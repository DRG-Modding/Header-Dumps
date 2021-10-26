// BlueprintGeneratedClass BP_TransmitterNode.BP_TransmitterNode_C
// Size: 0x324 (Inherited: 0x2b0)
struct ABP_TransmitterNode_C : ATether {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	UOutlineComponent* outline; // 0x2b8(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x2c0(0x08)
	UAudioComponent* TetherCreateConnection_Cue; // 0x2c8(0x08)
	UAudioComponent* TetherIdle_Cue; // 0x2d0(0x08)
	UTetherComponent* Tether; // 0x2d8(0x08)
	UStaticMeshComponent* StaticMesh; // 0x2e0(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x2e8(0x08)
	FVector throwForce; // 0x2f0(0x0c)
	float ConnectionDelay; // 0x2fc(0x04)
	bool Disabled; // 0x300(0x01)
	bool HasDeployed; // 0x301(0x01)
	float RangeScaleConversion; // 0x304(0x04)
	float HackingPower; // 0x308(0x04)
	bool KillInitalized; // 0x30c(0x01)
	APlayerCharacter* holder; // 0x310(0x08)
	FVector OldLocation; // 0x318(0x0c)

	void InitKill();
	void OnRep_KillInitalized();
	void OnRep_HackingPower();
	void DropAndThrowForce(FVector throwForce);
	void ReceiveBeginPlay();
	void BndEvt__UsableComponent_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature(APlayerCharacter* User, enum class EInputKeys Key);
	void BndEvt__Carry_K2Node_ComponentBoundEvent_0_CarriableEvent__DelegateSignature();
	void BndEvt__Carry_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature();
	void BndEvt__PysicalCollision_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	void Throw(FVector force);
	void TryConnecting();
	void BndEvt__Tether_K2Node_ComponentBoundEvent_5_TetherPowerChanged_Delegate__DelegateSignature(bool hasPower);
	void BndEvt__Tether_K2Node_ComponentBoundEvent_6_TetherConnectionChanged_Deletage__DelegateSignature(UTetherComponent* frontConnection, UTetherComponent* backConnection);
	void BndEvt__Tether_K2Node_ComponentBoundEvent_7_TeherMessage_Delegate__DelegateSignature(FName Message);
	void destroy();
	void OnDroneDrop();
	void OnDronePickup();
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_8_PointRemovedEvent__DelegateSignature();
	void StartDetection();
	void BndEvt__Tether_K2Node_ComponentBoundEvent_2_TetherRangeChanged__DelegateSignature(float range);
	void Cheat_Kill();
	void ExecuteUbergraph_BP_TransmitterNode(int32_t EntryPoint);
};

