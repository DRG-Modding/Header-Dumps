#ifndef UE4SS_SDK_CharacterSelectionSwitcher_HPP
#define UE4SS_SDK_CharacterSelectionSwitcher_HPP

class ACharacterSelectionSwitcher_C : ACharacterSelectionSwitcher
{
    FPointerToUberGraphFrame UberGraphFrame;
    UEndScreenSetups_C* EndScreenSetups;
    UEndScreenActorController_C* EndScreenActorController3;
    UEndScreenActorController_C* EndScreenActorController2;
    UEndScreenActorController_C* EndScreenActorController1;
    UEndScreenActorController_C* EndScreenActorController0;
    USkeletalMeshComponent* Dwarf_Rig;
    USceneComponent* DefaultSceneRoot;
    TSubclassOf<APlayerCharacter> PlayerCharacterClass;
    APlayerCharacter* Character;
    ACameraActor* Camera;
    AActor* selectionLocation;
    AActor* CustomizationLocation;
    FTimerHandle IdleTimer;
    int32 EquippedIndex;
    ECharselectionCameraLocation CurrentSelection;
    TSubclassOf<AActor> Viewer3DCharacterClass;
    AActor* ViewerObject;
    AActor* ViewWeaponCamLocation;
    AActor* ViewWeaponObjectLocation;
    AItem* EquipedItem;
    float LastManualRotate;
    TSubclassOf<AActor> View3DItemClass;
    AActor* EndScreenCamLocation;
    TArray<AActor*> EndscreenActors;
    FCharacterViewScene Scene;
    TArray<AActor*> EndScreenActorPositions_Four;
    TArray<AActor*> EndScreenActorPositions_Three;
    TArray<AActor*> EndScreenActorPositions_Two;
    TArray<AActor*> EndScreenActorPositions_One;
    TArray<UEndScreenActorController_C*> CharAnimControllers;
    FRandomStream EndScreenRandomStream;
    TArray<AActor*> EndscreenOnlySceneActors;
    TArray<AActor*> CharacterViewSceneOnlyActors;
    UFSDPhysicalMaterial* EndscreenPhysicalMaterial;
    TArray<ABP_Endscreen_Lamp_C*> EndScreenLamps;
    AActor* ForgeCamLocation;
    AActor* ForgeStartLocation;
    UPlayerTPAnimInstance* ForgeAnimInstance;
    ASkeletalMeshActor* ForgeBench;
    bool IsIdling;
    UStaticMeshComponent* MatrixCore;
    bool IsForging;
    TArray<UAnimSequenceBase*> ForgeIdleBreaks;
    UAnimSequence* Prop_AnimSeq;
    AActor* Prop_Actor;
    UAnimSequence* Victory_Pose;
    TSubclassOf<AActor> Prop_ActorClass;
    UAnimSequence* Prop_Pose;
    UAnimSequence* Prop_Idle;
    UAnimSequence* Victory_Idle;
    bool RestartLoadoutIdle;
    UFSDPhysicalMaterial* CharacerViewerFallbackPhysicalMaterial;
    AActor* PickaxeCameraLocation;
    AActor* Podium;
    AActor* CraftingLocation;

    void CleanActors(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FString CallFunc_GetDisplayName_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
    AActor* GetViewerActor();
    void RestartVanityIdleAnimMonatge(UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_Montage_Play_ReturnValue);
    void CleanVictoryPoseStuff(bool CallFunc_IsValid_ReturnValue);
    void LoadVictoryPoseStuff(UVictoryPose* VicPose, const FTransform CallFunc_GetTransform_ReturnValue, bool CallFunc_IsValidSoftClassReference_ReturnValue, UAnimSequence* CallFunc_LoadAnimSeq_Hard, TSubclassOf<AActor> CallFunc_LoadActorClass_Hard, UAnimSequence* CallFunc_LoadAnimSeq_Hard_1, UAnimSequence* CallFunc_LoadAnimSeq_Hard_2, UAnimSequence* CallFunc_LoadAnimSeq_Hard_3, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, AActor* CallFunc_FinishSpawningActor_ReturnValue, UAnimSequence* CallFunc_LoadAnimSeq_Hard_4, UAnimSequence* CallFunc_LoadAnimSeq_Hard_5);
    void FindEndscreenActorPos(int32 num players, int32 Index, AActor*& NewParam, bool CallFunc_EqualEqual_IntInt_ReturnValue, AActor* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, AActor* CallFunc_Array_Get_Item_1, AActor* CallFunc_Array_Get_Item_2, AActor* CallFunc_Array_Get_Item_3);
    void DestroyPreviousSceneActors(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void RotateFun(float Yaw, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, FHitResult CallFunc_K2_AddActorWorldRotation_SweepHitResult, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FHitResult CallFunc_K2_AddActorWorldRotation_SweepHitResult_1, bool CallFunc_IsValid_ReturnValue_2, FHitResult CallFunc_K2_AddActorWorldRotation_SweepHitResult_2, FHitResult CallFunc_K2_AddActorWorldRotation_SweepHitResult_3, bool CallFunc_IsValid_ReturnValue_3);
    void SetPreviewItem(UItemID* Item, TSubclassOf<AActor> CallFunc_GetItemPreviewClass_ReturnValue, TSubclassOf<AItem> CallFunc_GetItemClass_ReturnValue);
    void SelectCameraLocation(ECharselectionCameraLocation Selection, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FString CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, const FTransform CallFunc_GetTransform_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue_1, const FTransform CallFunc_GetTransform_ReturnValue_2, FHitResult CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, AActor* CallFunc_Array_Get_Item, AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, AActor* CallFunc_Array_Get_Item_2, AActor* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_3, const FTransform CallFunc_GetTransform_ReturnValue_3, FHitResult CallFunc_K2_SetActorTransform_SweepHitResult_1, bool CallFunc_K2_SetActorTransform_ReturnValue_1, const FTransform CallFunc_GetTransform_ReturnValue_4, const FTransform CallFunc_GetTransform_ReturnValue_5, FHitResult CallFunc_K2_SetActorTransform_SweepHitResult_2, bool CallFunc_K2_SetActorTransform_ReturnValue_2, FHitResult CallFunc_K2_SetActorTransform_SweepHitResult_3, bool CallFunc_K2_SetActorTransform_ReturnValue_3, FHitResult CallFunc_K2_SetActorTransform_SweepHitResult_4, bool CallFunc_K2_SetActorTransform_ReturnValue_4, FHitResult CallFunc_K2_SetActorTransform_SweepHitResult_5, bool CallFunc_K2_SetActorTransform_ReturnValue_5);
    APlayerCharacter* GetActiveCharacter();
    void RefreshCharacter(ECharselectionCameraLocation SelectionType, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue, FString CallFunc_Conv_BoolToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, APickaxePreviewActor* K2Node_DynamicCast_AsPickaxe_Preview_Actor, bool K2Node_DynamicCast_bSuccess, AItemPreviewActor* K2Node_DynamicCast_AsItem_Preview_Actor, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FString CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_2, const FTransform CallFunc_GetTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, AActor* CallFunc_FinishSpawningActor_ReturnValue, UCharacterVanityComponent* CallFunc_GetCharacterVanity_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UPlayerTPAnimInstance* K2Node_DynamicCast_AsPlayer_TPAnim_Instance, bool K2Node_DynamicCast_bSuccess_2, UGameData* CallFunc_GetFSDGameData_ReturnValue, TSubclassOf<UPlayerCharacter> CallFunc_GetDefaultCharacter_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, const FTransform CallFunc_GetTransform_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, bool CallFunc_BooleanAND_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValidClass_ReturnValue_1, TSubclassOf<UPlayerCharacter> K2Node_Select_Default, FString CallFunc_GetClassDisplayName_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_3, UPlayerCharacter* CallFunc_FinishSpawningActor_ReturnValue_1);
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
    void OnShowCharacterSelector(TSubclassOf<UPlayerCharacter> NewCharacter, ECharselectionCameraLocation selectionLocation);
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
    void ShowViewer3D(TSubclassOf<AActor> Actor, ECharselectionCameraLocation selectionLocation);
    void Equip(TSubclassOf<AItem> itemClass, int32 EquipSlot);
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
    void ExecuteUbergraph_CharacterSelectionSwitcher(int32 EntryPoint, OnAssetLoaded__DelegateSignature K2Node_CreateDelegate_OutputDelegate, OnMontageBlendingOutStartedMCDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_14, FName K2Node_CustomEvent_NotifyName_13, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName_12, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName K2Node_CustomEvent_NotifyName_11, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, FName K2Node_CustomEvent_NotifyName_10, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, FName Temp_name_Variable, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, FName K2Node_CustomEvent_NotifyName_9, FName K2Node_CustomEvent_NotifyName_8, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, FName K2Node_CustomEvent_NotifyName_7, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, FName K2Node_CustomEvent_NotifyName_6, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_10, FName K2Node_CustomEvent_NotifyName_5, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_11, FName Temp_name_Variable_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_12, FName K2Node_CustomEvent_NotifyName_4, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_13, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_14, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_15, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_16, FName Temp_name_Variable_2, OnMontageBlendingOutStartedMCDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_17, OnMontageBlendingOutStartedMCDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_18, GenericSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_19, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, ShowCharacterSelectorRotateSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_20, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_21, uint8 CallFunc_GetValidValue_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, ShowCharacterSelectorEqiupSlotSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_22, bool CallFunc_IsValid_ReturnValue_2, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_EquipCategory_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, const FItemLoadoutAnimations CallFunc_GetLoadoutAnimations_ReturnValue, float CallFunc_Montage_Play_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, TSubclassOf<UPlayerCharacter> K2Node_CustomEvent_NewCharacter, ECharselectionCameraLocation K2Node_CustomEvent_selectionLocation_1, int32 K2Node_CustomEvent_WeaponIndex, FString CallFunc_Conv_IntToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, int32 K2Node_CustomEvent_EquipSlot_1, FString CallFunc_Conv_IntToString_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, StartForging__DelegateSignature K2Node_CreateDelegate_OutputDelegate_23, const FItemLoadoutAnimations CallFunc_GetLoadoutAnimations_ReturnValue_1, int32 CallFunc_Array_LastIndex_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, UAnimSequence* CallFunc_Array_Get_Item, bool CallFunc_NotEqual_IntInt_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, float K2Node_CustomEvent_pitch, float K2Node_CustomEvent_yaw, float CallFunc_Abs_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult_1, bool CallFunc_K2_SetActorLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_7, UPlayerTPAnimInstance* CallFunc_GetTPAnimInstance_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, bool CallFunc_IsPlayingMontageInGroup_ReturnValue, UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue, EVanitySlot K2Node_Event_slot, bool CallFunc_RandomBool_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_3, UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_4, TSubclassOf<AActor> K2Node_CustomEvent_actor, ECharselectionCameraLocation K2Node_CustomEvent_selectionLocation, UItemID* CallFunc_GetItemID_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_8, TSubclassOf<AItem> K2Node_CustomEvent_itemClass, int32 K2Node_CustomEvent_EquipSlot, bool CallFunc_IsValid_ReturnValue_9, AItem* CallFunc_PickupItem_ReturnValue, const FItemLoadoutAnimations CallFunc_GetLoadoutAnimations_ReturnValue_2, FString CallFunc_GetClassDisplayName_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_2, ShowCharacterSelectorSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_24, bool CallFunc_IsValid_ReturnValue_10, TSubclassOf<AItem> CallFunc_GetObjectClass_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_11, float CallFunc_GetRealTimeSeconds_ReturnValue, float CallFunc_GetRealTimeSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_GetRealTimeSeconds_ReturnValue_2, float CallFunc_Sin_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_6, FCharacterViewScene K2Node_CustomEvent_viewScene, ShowCharacterSelectorEndScreenSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_25, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_RandomIntegerFromStream_ReturnValue, int32 CallFunc_MissionEndscreenSeed_ReturnValue, bool CallFunc_IsPlayInEditor_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_RandomIntegerFromStream_ReturnValue_1, UPlayerTPAnimInstance* CallFunc_GetTPAnimInstance_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult_2, bool CallFunc_K2_SetActorLocation_ReturnValue_2, bool CallFunc_IsPlayInEditor_ReturnValue_1, ShowCharacterSelectorEquipSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_26, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_2, UAnimMontage* K2Node_CustomEvent_Montage_2, bool K2Node_CustomEvent_bInterrupted_2, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_7, ShowViewer3DSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_27, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_RandomInteger_ReturnValue_1, UAnimSequenceBase* CallFunc_Array_Get_Item_1, UObject* Temp_object_Variable, UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_3, UAnimMontage* K2Node_DynamicCast_AsAnim_Montage, bool K2Node_DynamicCast_bSuccess, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_12, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_8, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, UObject* K2Node_CustomEvent_Loaded, bool CallFunc_IsValid_ReturnValue_13, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_9, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue, UEndScreenActorController_C* CallFunc_Array_Get_Item_2, bool CallFunc_LessEqual_IntInt_ReturnValue, UAnimSequenceBase* Temp_object_Variable_1, UAnimSequenceBase* Temp_object_Variable_2, bool Temp_bool_Variable, UVictoryPose* K2Node_Event_victoryPose, UAnimSequenceBase* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_14, bool CallFunc_IsValid_ReturnValue_15, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_16, UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_4, USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2, UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_5, int32 Temp_int_Array_Index_Variable, ABP_Endscreen_Lamp_C* CallFunc_Array_Get_Item_3, bool CallFunc_IsValid_ReturnValue_17, UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_6, UAnimMontage* K2Node_CustomEvent_Montage_1, bool K2Node_CustomEvent_bInterrupted_1, UAnimMontage* K2Node_CustomEvent_Montage, bool K2Node_CustomEvent_bInterrupted, UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_7, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue_18, UAnimSequenceBase* Temp_object_Variable_3, UAnimSequenceBase* Temp_object_Variable_4, UAnimSequenceBase* Temp_object_Variable_5, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_10, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_3, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_4, float CallFunc_Montage_Play_ReturnValue_1, UAnimSequenceBase* Temp_object_Variable_6, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_5, UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_8, UAnimSequenceBase* Temp_object_Variable_7, UAnimSequenceBase* Temp_object_Variable_8, UAnimSequenceBase* Temp_object_Variable_9, UAnimSequenceBase* Temp_object_Variable_10, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_5, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_6, int32 Temp_int_Loop_Counter_Variable_1, float CallFunc_Montage_Play_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, UObject* Temp_object_Variable_11, EVanitySlot Temp_byte_Variable, UAnimMontage* K2Node_DynamicCast_AsAnim_Montage_1, bool K2Node_DynamicCast_bSuccess_1, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, UAnimSequenceBase* K2Node_Select_Default_1, UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_19, UObject* K2Node_CustomEvent_Loaded_1, int32 Temp_int_Array_Index_Variable_1, UEndScreenActorController_C* CallFunc_Array_Get_Item_4, FCharacterViewInfo CallFunc_Array_Get_Item_5, AActor* CallFunc_FindEndscreenActorPos_NewParam, const FTransform CallFunc_GetTransform_ReturnValue, FEndScreenMove CallFunc_GetEndScreenMoveSet_Selected, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, UPlayerCharacter* CallFunc_FinishSpawningActor_ReturnValue, UCharacterVanityComponent* CallFunc_GetCharacterVanity_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, OnAssetLoaded__DelegateSignature K2Node_CreateDelegate_OutputDelegate_28, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_29, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4);
}

#endif