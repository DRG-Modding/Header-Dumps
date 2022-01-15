#ifndef UE4SS_SDK_LVL_SpaceRig_HPP
#define UE4SS_SDK_LVL_SpaceRig_HPP

class ALVL_SpaceRig_C : ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    float SunSpeed;
    int32 CurrentNumberOfBarrelsInDroppod;
    int32 CurrentNumberOfBarrels;
    int32 DesiredBarrelNumber;
    int32 MedbayBantersPlayed;
    int32 Players spawned;
    UFSDAchievement* TimeWellSpentAchievement;
    UFSDAchievement* ForeignObjectsInTheLaunchbay;
    TArray<TSubclassOf<UUserWidget>> Preload_Widgets;
    AStaticMeshActor* ForceShield_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    AEmitter* P_SpaceRig_Smoke_2_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    AStaticMeshActor* SaluteStatue_B2_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    AStaticMeshActor* Statue_Engineer_5_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    AStaticMeshActor* Statue_Driller_2_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    AStaticMeshActor* Statue_Gunner_8_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    ASkeletalMeshActor* SK_DonkeyMK5_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    AStaticMeshActor* Statue_Scout_11_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    AStaticMeshActor* SaluteStatue_B_14_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    AStaticMeshActor* Plane_2_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    AStaticMeshActor* Plane2_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    AStaticMeshActor* Plane3_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    AStaticMeshActor* Plane4_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    AStaticMeshActor* Plane5_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    AStaticMeshActor* Plane6_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    AStaticMeshActor* SaluteStatue_A_2_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    AStaticMeshActor* Plane7_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    AStaticMeshActor* Plane8_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    ASign_MemorialUnlock_C* Memorial_Sign_DRILLERSTATUE_lvl10_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    ASign_MemorialUnlock_C* Memorial_Sign_ENGINEERSTATUE_lvl10_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    ASign_MemorialUnlock_C* Memorial_Sign_GUNNERSTATUE_lvl10_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    ASign_MemorialUnlock_C* Memorial_Sign_SCOUTSTATUE_lvl10_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    ASign_MemorialUnlock_C* Memorial_Sign_MULESTATUE_Rank6_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    ASign_MemorialUnlock_C* Memorial_Sign_POSTER_Rank3_L_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    ASign_MemorialUnlock_C* Memorial_Sign_POSTER_Rank3_R_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    ASign_MemorialUnlock_C* Memorial_Sign_POSTER_Rank5_L_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    ASign_MemorialUnlock_C* Memorial_Sign_POSTER_Rank5_R_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    ASign_MemorialUnlock_C* Memorial_Sign_POSTER_Rank7_R_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    ASign_MemorialUnlock_C* Memorial_Sign_POSTER_Rank7_L_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    ASign_MemorialUnlock_C* Memorial_Sign_POSTER_Rank4_R_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    ASign_MemorialUnlock_C* Memorial_Sign_POSTER_Rank4_L_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    ASign_MemorialUnlock_C* Memorial_Sign_GIANTSTATUE_Rank8_R_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    ASign_MemorialUnlock_C* Memorial_Sign_GIANTSTATUE_Rank8_L_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    ASign_MemorialUnlock_C* Memorial_Sign_GOLDDRILLERSTATUE_lvl20_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    ASign_MemorialUnlock_C* Memorial_Sign_GOLDENGINEERSTATUE_lvl20_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    ASign_MemorialUnlock_C* Memorial_Sign_GOLDGUNNERSTATUE_lvl20_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    ASign_MemorialUnlock_C* Memorial_Sign_GOLDSCOUTSTATUE_lvl20_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    ASign_MemorialUnlock_C* Memorial_Sign_GOLDSALUTINGSTATUE_Rank20_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    ASign_MemorialUnlock_C* Memorial_Sign_GOLDMULESTATUE_Rank12_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    ASign_MemorialUnlock_C* Memorial_Sign_GOLDGIANTSTATUES_Rank15_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    AStaticMeshActor* SM_DonkeyStatic01_4_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    APointLight* Light_Dropchute_BlueLight_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    ABP_DropPod_Rig_C* BP_DropPod_Rig_2_ExecuteUbergraph_LVL_SpaceRig_RefProperty;
    ASkeletalMeshActor* SK_Banner3_EdGraph_0_RefProperty;
    ABP_Phys_Newsstand_FreeBeer_C* BP_Phys_Newsstand_FreeBeer4_EdGraph_0_RefProperty;
    ABP_Phys_Newsstand_FreeBeer_C* BP_Phys_Newsstand_FreeBeer3_EdGraph_0_RefProperty;
    ABP_Phys_Newsstand_FreeBeer_C* BP_Phys_Newsstand_FreeBeer2_EdGraph_0_RefProperty;
    ABP_Phys_Newsstand_FreeBeer_C* BP_Phys_Newsstand_FreeBeer_2_EdGraph_0_RefProperty;
    ABP_ConfettiPlane_C* BP_ConfettiPlane3_EdGraph_0_RefProperty;
    ABP_ConfettiPlane_C* BP_ConfettiPlane2_EdGraph_0_RefProperty;
    ABP_ConfettiPlane_C* BP_ConfettiPlane_4_EdGraph_0_RefProperty;

    void Set HolidayHalloween Active(bool Is Active, bool CallFunc_Not_PreBool_ReturnValue);
    void Set Beer Event Active(bool Is Active, bool CallFunc_Not_PreBool_ReturnValue);
    void ReceiveBeginPlay();
    void OnLeaveSpacerig_Event_0();
    void BndEvt__DockingBayTriggerBox_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(AActor* OverlappedActor, AActor* OtherActor);
    void BndEvt__InsideDroppodTriggerBox_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature(AActor* OverlappedActor, AActor* OtherActor);
    void BndEvt__DockingBayTriggerBox_AllbarrelsIn_K2Node_ActorBoundEvent_18_ActorBeginOverlapSignature__DelegateSignature(AActor* OverlappedActor, AActor* OtherActor);
    void BndEvt__DockingBayTriggerBox_AllbarrelsIn_K2Node_ActorBoundEvent_48_ActorEndOverlapSignature__DelegateSignature(AActor* OverlappedActor, AActor* OtherActor);
    void BndEvt__Start_10_K2Node_ActorBoundEvent_0_PlayerSpawnInHub__DelegateSignature(UFSDPlayerController* Controller);
    void BndEvt__Start_14_K2Node_ActorBoundEvent_2_PlayerSpawnInHub__DelegateSignature(UFSDPlayerController* Controller);
    void BndEvt__Start_12_K2Node_ActorBoundEvent_3_PlayerSpawnInHub__DelegateSignature(UFSDPlayerController* Controller);
    void BndEvt__Start_16_K2Node_ActorBoundEvent_5_PlayerSpawnInHub__DelegateSignature(UFSDPlayerController* Controller);
    void Play medbay banter(UFSDPlayerController* Player controller);
    void BndEvt__InsideDroppodTriggerBox_AllBarrelsIn_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature(AActor* OverlappedActor, AActor* OtherActor);
    void BndEvt__InsideDroppodTriggerBox_AllBarrelsIn_K2Node_ActorBoundEvent_7_ActorEndOverlapSignature__DelegateSignature(AActor* OverlappedActor, AActor* OtherActor);
    void OnFreeBeerRewardChanged(bool IsBeersFree);
    void OnCountdownChanged_Event_0(bool Active);
    void StreamSubLevels();
    void ExecuteUbergraph_LVL_SpaceRig(int32 EntryPoint, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsFreeBeerRewardActive_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool CallFunc_HasCharacterRetired_ReturnValue, bool CallFunc_HasCharacterRetired_ReturnValue_1, int32 CallFunc_GetClassLevel_ReturnValue, int32 CallFunc_GetClassLevel_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_2, int32 Temp_int_Variable, bool CallFunc_HasCharacterRetired_ReturnValue_2, int32 CallFunc_GetClassLevel_ReturnValue_2, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, bool CallFunc_HasCharacterRetired_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_2, int32 CallFunc_GetClassLevel_ReturnValue_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue_3, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_HasCharacterRetired_ReturnValue_4, int32 CallFunc_GetClassLevel_ReturnValue_4, bool Temp_bool_IsClosed_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_4, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_5, bool CallFunc_HasCharacterRetired_ReturnValue_5, int32 CallFunc_GetClassLevel_ReturnValue_5, bool CallFunc_GreaterEqual_IntInt_ReturnValue_5, int32 Temp_int_Variable_1, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, bool Temp_bool_Has_Been_Initd_Variable_2, AActor* K2Node_ActorBoundEvent_OverlappedActor_5, AActor* K2Node_ActorBoundEvent_OtherActor_5, UBP_Phys_Barrel01_C* K2Node_DynamicCast_AsBP_Phys_Barrel_01, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, OnLeaveSpacerig__DelegateSignature K2Node_CreateDelegate_OutputDelegate, float CallFunc_RandomFloatInRange_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_6, int32 CallFunc_GetPlayerRank_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_6, bool CallFunc_GreaterEqual_IntInt_ReturnValue_7, bool CallFunc_GreaterEqual_IntInt_ReturnValue_8, bool CallFunc_GreaterEqual_IntInt_ReturnValue_9, bool CallFunc_GreaterEqual_IntInt_ReturnValue_10, bool CallFunc_GreaterEqual_IntInt_ReturnValue_11, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_2, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_3, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_4, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_5, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_7, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_6, bool CallFunc_HasCharacterRetired_ReturnValue_6, int32 CallFunc_GetClassLevel_ReturnValue_6, bool CallFunc_GreaterEqual_IntInt_ReturnValue_12, bool CallFunc_BooleanOR_ReturnValue_6, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_7, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_8, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_9, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_10, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_11, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_12, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_8, bool Temp_bool_IsClosed_Variable_2, bool CallFunc_HasCharacterRetired_ReturnValue_7, int32 CallFunc_GetClassLevel_ReturnValue_7, bool CallFunc_GreaterEqual_IntInt_ReturnValue_13, bool CallFunc_BooleanOR_ReturnValue_7, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_13, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_14, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_15, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_16, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_17, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_18, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_19, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_20, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_9, int32 CallFunc_GetPlayerRank_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_14, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_10, int32 CallFunc_GetPlayerRank_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue_15, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_11, int32 CallFunc_GetPlayerRank_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue_16, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_21, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_22, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_23, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_24, bool Temp_bool_IsClosed_Variable_3, float CallFunc_RandomFloatInRange_ReturnValue_1, AActor* K2Node_ActorBoundEvent_OverlappedActor_4, AActor* K2Node_ActorBoundEvent_OtherActor_4, UBP_Phys_Barrel01_C* K2Node_DynamicCast_AsBP_Phys_Barrel_01_1, bool K2Node_DynamicCast_bSuccess_1, AActor* K2Node_ActorBoundEvent_OverlappedActor_3, AActor* K2Node_ActorBoundEvent_OtherActor_3, UBP_Phys_Barrel01_C* K2Node_DynamicCast_AsBP_Phys_Barrel_01_2, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Add_IntInt_ReturnValue_3, AActor* K2Node_ActorBoundEvent_OverlappedActor_2, AActor* K2Node_ActorBoundEvent_OtherActor_2, UBP_Phys_Barrel01_C* K2Node_DynamicCast_AsBP_Phys_Barrel_01_3, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_25, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_26, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, UFSDPlayerController* K2Node_ActorBoundEvent_Controller_3, bool CallFunc_IsValid_ReturnValue, UFSDPlayerController* K2Node_ActorBoundEvent_Controller_2, UFSDPlayerController* K2Node_ActorBoundEvent_Controller_1, UFSDPlayerController* K2Node_ActorBoundEvent_Controller, UFSDPlayerController* K2Node_CustomEvent_Player_controller, APawn* CallFunc_K2_GetPawn_ReturnValue, UBP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character, bool K2Node_DynamicCast_bSuccess_4, UFSDEventManager* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, TArray<UFSDEvent*>& CallFunc_GetActiveEventHandlers_ReturnValue, UFSDEvent* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_4, SoftObjectProperty CallFunc_Array_Get_Item_1, FString CallFunc_Conv_SoftObjectReferenceToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_FindSubstring_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_FindSubstring_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue, FString CallFunc_GetSubstring_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Variable_2, bool CallFunc_LessEqual_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_5, float CallFunc_Multiply_IntFloat_ReturnValue, OnCountdownChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_7, float CallFunc_Multiply_IntFloat_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_8, float CallFunc_Multiply_IntFloat_ReturnValue_3, UDialogDataAsset* Temp_object_Variable, OnFreeBeersChangedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Variable_3, AActor* K2Node_ActorBoundEvent_OverlappedActor_1, AActor* K2Node_ActorBoundEvent_OtherActor_1, bool CallFunc_LessEqual_IntInt_ReturnValue_3, UBP_Phys_Barrel01_C* K2Node_DynamicCast_AsBP_Phys_Barrel_01_4, bool K2Node_DynamicCast_bSuccess_5, AActor* K2Node_ActorBoundEvent_OverlappedActor, AActor* K2Node_ActorBoundEvent_OtherActor, UBP_Phys_Barrel01_C* K2Node_DynamicCast_AsBP_Phys_Barrel_01_5, bool K2Node_DynamicCast_bSuccess_6, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_9, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UDialogDataAsset* Temp_object_Variable_1, UPlayerCharacter* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, UBP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess_7, bool K2Node_CustomEvent_IsBeersFree, int32 Temp_int_Variable_4, UDialogDataAsset* K2Node_Select_Default, bool CallFunc_HasAuthority_ReturnValue_3, int32 Temp_int_Variable_5, UBP_GameState_SpaceRig_C* CallFunc_GetSRGameState_gameState, bool CallFunc_LessEqual_IntInt_ReturnValue_4, bool K2Node_CustomEvent_Active);
}

#endif
