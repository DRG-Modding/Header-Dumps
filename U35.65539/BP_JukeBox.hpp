#ifndef UE4SS_SDK_BP_JukeBox_HPP
#define UE4SS_SDK_BP_JukeBox_HPP

class ABP_JukeBox_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* SM_SpaceRig_Jukebox_B;
    UWidgetComponent* Widget5;
    UWidgetComponent* Widget4;
    UWidgetComponent* Widget3;
    UWidgetComponent* Widget2;
    UWidgetComponent* Widget1;
    UWidgetComponent* Widget_Display;
    UStaticMeshComponent* Jukebox;
    USphereComponent* DanceSphere;
    UStaticMeshComponent* SM_Speaker1;
    UStaticMeshComponent* SM_Speaker;
    UBoxComponent* Box;
    UAudioComponent* JukeBox_Random_Cue;
    UInstantUsable* InstantUsable;
    USceneComponent* DefaultSceneRoot;
    float Timeline_0_Scale_Transform_97D3E280454882350654EE88E83F3CA7;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_97D3E280454882350654EE88E83F3CA7;
    UTimelineComponent* Timeline_0;
    float RotationSpeed;
    bool Can Use;
    int32 MusicIndex;
    FVector Scale;
    TArray<TSoftObjectPtr<USoundBase>> MusicList;
    UFSDAchievement* PartyTimeAchievement;
    int32 PartyTimeDwarves;
    TArray<TSoftObjectPtr<USoundBase>> SafeMusicList;
    int32 LocalMusicIndex;

    void UpdateCurrentMusic(TArray<SoftObjectProperty> AvailableMusic, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, FString CallFunc_Conv_IntToString_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, bool Temp_bool_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, SoftObjectProperty CallFunc_Array_Get_Item, TArray<SoftObjectProperty>& CallFunc_GetAvailableMusic_OutMusicList, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, uint8 K2Node_Select_Default, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, UWidget_Jukebox02_C* K2Node_DynamicCast_AsWidget_Jukebox_02, bool K2Node_DynamicCast_bSuccess);
    void GetAvailableMusic(TArray<SoftObjectProperty>& OutMusicList, TArray<SoftObjectProperty> CombinedList, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue);
    void PayCredits(UPlayerCharacter* User, int32 Amount, bool& Purchased, UFSDPlayerState* CallFunc_GetPlayerState_ReturnValue, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, UBP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
    void OnRep_MusicIndex(TArray<SoftObjectProperty> AvailableMusic);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnLoaded_C15A19DC4718016F57823CA232EE5860(UObject* Loaded);
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void ReceiveBeginPlay();
    void ToggleSpeakerRocking();
    void BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void LoadAndPlay(SoftObjectProperty Music);
    void Stop Juke Box();
    void StopJukebox();
    void SetupDisableJukeboxMusic();
    void OnStreamerModeChanged(bool NewValue);
    void OnSaluteEvent_Event_0();
    void ExecuteUbergraph_BP_JukeBox(int32 EntryPoint, BoolConfigChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate, SaluteEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, OnAssetLoaded__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_HasAuthority_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_HasAuthority_ReturnValue_2, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_PayCredits_Purchased, UBP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, UObject* Temp_object_Variable, float CallFunc_RandomFloatInRange_ReturnValue, USoundBase* K2Node_DynamicCast_AsSound_Base, bool K2Node_DynamicCast_bSuccess_3, SoftObjectProperty K2Node_CustomEvent_Music, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, UObject* K2Node_CustomEvent_Loaded, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool K2Node_CustomEvent_NewValue, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_1, TArray<SoftObjectProperty>& CallFunc_GetAvailableMusic_OutMusicList, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue_1, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_3, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_3, TArray<AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 CallFunc_Array_Length_ReturnValue, AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_2, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsSaluting_ReturnValue, bool CallFunc_HasDrink_ReturnValue, AActor* CallFunc_Array_Get_Item_1, bool CallFunc_BooleanAND_ReturnValue_2, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_3, bool K2Node_DynamicCast_bSuccess_5, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsLocalController_ReturnValue);
}

#endif
