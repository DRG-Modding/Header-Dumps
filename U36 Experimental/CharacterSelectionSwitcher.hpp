#ifndef UE4SS_SDK_CharacterSelectionSwitcher_HPP
#define UE4SS_SDK_CharacterSelectionSwitcher_HPP

class ACharacterSelectionSwitcher_C : public ACharacterSelectionSwitcher
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEndScreenSetups_C* EndScreenSetups;
    class UEndScreenActorController_C* EndScreenActorController3;
    class UEndScreenActorController_C* EndScreenActorController2;
    class UEndScreenActorController_C* EndScreenActorController1;
    class UEndScreenActorController_C* EndScreenActorController0;
    class USkeletalMeshComponent* Dwarf_Rig;
    class USceneComponent* DefaultSceneRoot;
    TSubclassOf<class APlayerCharacter> PlayerCharacterClass;
    class APlayerCharacter* Character;
    class ACameraActor* Camera;
    class AActor* selectionLocation;
    class AActor* CustomizationLocation;
    FTimerHandle IdleTimer;
    int32 EquippedIndex;
    ECharselectionCameraLocation CurrentSelection;
    TSubclassOf<class AActor> Viewer3DCharacterClass;
    class AActor* ViewerObject;
    class AActor* ViewWeaponCamLocation;
    class AActor* ViewWeaponObjectLocation;
    class AItem* EquipedItem;
    float LastManualRotate;
    TSubclassOf<class AActor> View3DItemClass;
    class AActor* EndScreenCamLocation;
    TArray<class AActor*> EndscreenActors;
    FCharacterViewScene Scene;
    TArray<class AActor*> EndScreenActorPositions_Four;
    TArray<class AActor*> EndScreenActorPositions_Three;
    TArray<class AActor*> EndScreenActorPositions_Two;
    TArray<class AActor*> EndScreenActorPositions_One;
    TArray<class UEndScreenActorController_C*> CharAnimControllers;
    FRandomStream EndScreenRandomStream;
    TArray<class AActor*> EndscreenOnlySceneActors;
    TArray<class AActor*> CharacterViewSceneOnlyActors;
    class UFSDPhysicalMaterial* EndscreenPhysicalMaterial;
    TArray<class ABP_Endscreen_Lamp_C*> EndScreenLamps;
    class AActor* ForgeCamLocation;
    class AActor* ForgeStartLocation;
    class UPlayerTPAnimInstance* ForgeAnimInstance;
    class ASkeletalMeshActor* ForgeBench;
    bool IsIdling;
    class UStaticMeshComponent* MatrixCore;
    bool IsForging;
    TArray<class UAnimSequenceBase*> ForgeIdleBreaks;
    class UAnimSequence* Prop_AnimSeq;
    class AActor* Prop_Actor;
    class UAnimSequence* Victory_Pose;
    TSubclassOf<class AActor> Prop_ActorClass;
    class UAnimSequence* Prop_Pose;
    class UAnimSequence* Prop_Idle;
    class UAnimSequence* Victory_Idle;
    bool RestartLoadoutIdle;
    class UFSDPhysicalMaterial* CharacerViewerFallbackPhysicalMaterial;
    class AActor* PickaxeCameraLocation;
    class AActor* Podium;
    class AActor* CraftingLocation;

    void CleanActors();
    class AActor* GetViewerActor();
    void RestartVanityIdleAnimMonatge();
    void CleanVictoryPoseStuff();
    void LoadVictoryPoseStuff(class UVictoryPose* VicPose);
    void FindEndscreenActorPos(int32 num players, int32 Index, class AActor*& NewParam);
    void DestroyPreviousSceneActors();
    void RotateFun(float Yaw);
    void SetPreviewItem(class UItemID* Item);
    void SelectCameraLocation(ECharselectionCameraLocation Selection);
    class APlayerCharacter* GetActiveCharacter();
    void RefreshCharacter(ECharselectionCameraLocation SelectionType);
    void OnLoaded_516F3DE24C233C61C7A1519D88D99E0F(class UObject* Loaded);
    void OnLoaded_516F3DE24C233C61C7A1519D1101C230(class UObject* Loaded);
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
    void OnShowCharacterSelector(TSubclassOf<class APlayerCharacter> NewCharacter, ECharselectionCameraLocation selectionLocation);
    void SwitchToWeapon(int32 WeaponIndex);
    void EquipSlot(int32 EquipSlot);
    void StartIdles();
    void SetIdleBreak();
    void Hide();
    void Rotate(float Pitch, float Yaw);
    void VanityLoop();
    void DoStuff();
    void StartVanityIdles();
    void OnVanityItemEquipped(EVanitySlot Slot);
    void ShowViewer3D(TSubclassOf<class AActor> Actor, ECharselectionCameraLocation selectionLocation);
    void Equip(TSubclassOf<class AItem> itemClass, int32 EquipSlot);
    void ReceiveTick(float DeltaSeconds);
    void ShowEndScreen(FCharacterViewScene viewScene);
    void ForgeLoop();
    void ForgeStart();
    void BreakEnd(class UAnimMontage* Montage, bool bInterrupted);
    void ForgeIdleLoop();
    void OnVictoryPoseChanged(class UVictoryPose* VictoryPose);
    void PropPoseDone(class UAnimMontage* Montage, bool bInterrupted);
    void PoseDone(class UAnimMontage* Montage, bool bInterrupted);
    void OnCharacterRefresh();
    void SkipForging();
    void OnForgingDone();
    void ExecuteUbergraph_CharacterSelectionSwitcher(int32 EntryPoint);
};

#endif
