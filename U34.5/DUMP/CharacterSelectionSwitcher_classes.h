// BlueprintGeneratedClass CharacterSelectionSwitcher.CharacterSelectionSwitcher_C
// Size: 0x430 (Inherited: 0x220)
struct ACharacterSelectionSwitcher_C : ACharacterSelectionSwitcher {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UEndScreenSetups_C* EndScreenSetups; // 0x228(0x08)
	UEndScreenActorController_C* EndScreenActorController3; // 0x230(0x08)
	UEndScreenActorController_C* EndScreenActorController2; // 0x238(0x08)
	UEndScreenActorController_C* EndScreenActorController1; // 0x240(0x08)
	UEndScreenActorController_C* EndScreenActorController0; // 0x248(0x08)
	USkeletalMeshComponent* Dwarf_Rig; // 0x250(0x08)
	USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	APlayerCharacter* PlayerCharacterClass; // 0x260(0x08)
	APlayerCharacter* Character; // 0x268(0x08)
	ACameraActor* Camera; // 0x270(0x08)
	AActor* selectionLocation; // 0x278(0x08)
	AActor* CustomizationLocation; // 0x280(0x08)
	FTimerHandle IdleTimer; // 0x288(0x08)
	int32_t EquippedIndex; // 0x290(0x04)
	enum class ECharselectionCameraLocation CurrentSelection; // 0x294(0x01)
	AActor* Viewer3DCharacterClass; // 0x298(0x08)
	AActor* ViewerObject; // 0x2a0(0x08)
	AActor* ViewWeaponCamLocation; // 0x2a8(0x08)
	AActor* ViewWeaponObjectLocation; // 0x2b0(0x08)
	AItem* EquipedItem; // 0x2b8(0x08)
	float LastManualRotate; // 0x2c0(0x04)
	AActor* View3DItemClass; // 0x2c8(0x08)
	AActor* EndScreenCamLocation; // 0x2d0(0x08)
	TArray<AActor*> EndscreenActors; // 0x2d8(0x10)
	FCharacterViewScene Scene; // 0x2e8(0x18)
	TArray<AActor*> EndScreenActorPositions_Four; // 0x300(0x10)
	TArray<AActor*> EndScreenActorPositions_Three; // 0x310(0x10)
	TArray<AActor*> EndScreenActorPositions_Two; // 0x320(0x10)
	TArray<AActor*> EndScreenActorPositions_One; // 0x330(0x10)
	TArray<UEndScreenActorController_C*> CharAnimControllers; // 0x340(0x10)
	FRandomStream EndScreenRandomStream; // 0x350(0x08)
	TArray<AActor*> EndscreenOnlySceneActors; // 0x358(0x10)
	TArray<AActor*> CharacterViewSceneOnlyActors; // 0x368(0x10)
	UFSDPhysicalMaterial* EndscreenPhysicalMaterial; // 0x378(0x08)
	TArray<ABP_Endscreen_Lamp_C*> EndScreenLamps; // 0x380(0x10)
	AActor* ForgeCamLocation; // 0x390(0x08)
	AActor* ForgeStartLocation; // 0x398(0x08)
	UPlayerTPAnimInstance* ForgeAnimInstance; // 0x3a0(0x08)
	ASkeletalMeshActor* ForgeBench; // 0x3a8(0x08)
	bool IsIdling; // 0x3b0(0x01)
	UStaticMeshComponent* MatrixCore; // 0x3b8(0x08)
	bool IsForging; // 0x3c0(0x01)
	TArray<UAnimSequenceBase*> ForgeIdleBreaks; // 0x3c8(0x10)
	UAnimSequence* Prop_AnimSeq; // 0x3d8(0x08)
	AActor* Prop_Actor; // 0x3e0(0x08)
	UAnimSequence* Victory_Pose; // 0x3e8(0x08)
	AActor* Prop_ActorClass; // 0x3f0(0x08)
	UAnimSequence* Prop_Pose; // 0x3f8(0x08)
	UAnimSequence* Prop_Idle; // 0x400(0x08)
	UAnimSequence* Victory_Idle; // 0x408(0x08)
	bool RestartLoadoutIdle; // 0x410(0x01)
	UFSDPhysicalMaterial* CharacerViewerFallbackPhysicalMaterial; // 0x418(0x08)
	AActor* PickaxeCameraLocation; // 0x420(0x08)
	AActor* Podium; // 0x428(0x08)

	void CleanActors();
	AActor* GetViewerActor();
	void RestartVanityIdleAnimMonatge();
	void CleanVictoryPoseStuff();
	void LoadVictoryPoseStuff(UVictoryPose* VicPose);
	void FindEndscreenActorPos(int32_t num players, int32_t Index, AActor* NewParam);
	void DestroyPreviousSceneActors();
	void RotateFun(float Yaw);
	void SetPreviewItem(AActor* Class);
	void SelectCameraLocation(enum class ECharselectionCameraLocation Selection);
	APlayerCharacter* GetActiveCharacter();
	void RefreshCharacter(enum class ECharselectionCameraLocation SelectionType);
	void OnLoaded_516F3DE24C233C61C7A1519D88D99E0F(UObject* Loaded);
	void OnLoaded_516F3DE24C233C61C7A1519D1101C230(UObject* Loaded);
	void OnNotifyEnd_B0CB40174FA1135597179392BE030FD1(FName NotifyName);
	void OnNotifyBegin_B0CB40174FA1135597179392BE030FD1(FName NotifyName);
	void OnInterrupted_B0CB40174FA1135597179392BE030FD1(FName NotifyName);
	void OnBlendOut_B0CB40174FA1135597179392BE030FD1(FName NotifyName);
	void OnCompleted_B0CB40174FA1135597179392BE030FD1(FName NotifyName);
	void OnNotifyEnd_BDB7978A405A08A3A09CF3BC042E4D40(FName NotifyName);
	void OnNotifyBegin_BDB7978A405A08A3A09CF3BC042E4D40(FName NotifyName);
	void OnInterrupted_BDB7978A405A08A3A09CF3BC042E4D40(FName NotifyName);
	void OnBlendOut_BDB7978A405A08A3A09CF3BC042E4D40(FName NotifyName);
	void OnCompleted_BDB7978A405A08A3A09CF3BC042E4D40(FName NotifyName);
	void OnNotifyEnd_6DC7882842E914A95C4ACD9AF2E9C943(FName NotifyName);
	void OnNotifyBegin_6DC7882842E914A95C4ACD9AF2E9C943(FName NotifyName);
	void OnInterrupted_6DC7882842E914A95C4ACD9AF2E9C943(FName NotifyName);
	void OnBlendOut_6DC7882842E914A95C4ACD9AF2E9C943(FName NotifyName);
	void OnCompleted_6DC7882842E914A95C4ACD9AF2E9C943(FName NotifyName);
	void ReceiveBeginPlay();
	void OnShowCharacterSelector(APlayerCharacter* NewCharacter, enum class ECharselectionCameraLocation selectionLocation);
	void SwitchToWeapon(int32_t WeaponIndex);
	void EquipSlot(int32_t EquipSlot);
	void StartIdles();
	void SetIdleBreak();
	void Hide();
	void Rotate(float Pitch, float Yaw);
	void VanityLoop();
	void DoStuff();
	void StartVanityIdles();
	void OnVanityItemEquipped(enum class EVanitySlot Slot);
	void ShowViewer3D(AActor* Actor, enum class ECharselectionCameraLocation selectionLocation);
	void Equip(AItem* itemClass, int32_t EquipSlot);
	void ReceiveTick(float DeltaSeconds);
	void ShowEndScreen(FCharacterViewScene viewScene);
	void ForgeLoop();
	void ForgeStart();
	void BreakEnd(UAnimMontage* Montage, bool bInterrupted);
	void ForgeIdleLoop();
	void OnVictoryPoseChanged(UVictoryPose* VictoryPose);
	void PropPoseDone(UAnimMontage* Montage, bool bInterrupted);
	void PoseDone(UAnimMontage* Montage, bool bInterrupted);
	void OnCharacterRefresh();
	void ExecuteUbergraph_CharacterSelectionSwitcher(int32_t EntryPoint);
};

