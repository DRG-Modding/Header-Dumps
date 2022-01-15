#ifndef UE4SS_SDK_UI_Facility_Objective_PowerStation_HPP
#define UE4SS_SDK_UI_Facility_Objective_PowerStation_HPP

class UUI_Facility_Objective_PowerStation_C : UOptionalObjectiveWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimArrows;
    UWidgetAnimation* AnimHackingStopped;
    UCanvasPanel* Canvas_HackingPod;
    UCanvasPanel* Canvas_Root;
    UUI_ImageTinted_C* Img_Arrow_Left;
    UUI_ImageTinted_C* Img_Arrow_Right;
    UUI_ImageTinted_C* Img_Cable;
    UUI_ImageTinted_C* Img_CableOutline;
    UUI_ImageTinted_C* Img_HackingPod;
    UUI_ImageTinted_C* Img_HackingPod_Outline;
    UUI_ImageTinted_C* Img_PowerStation;
    UUI_ImageTinted_C* Img_PowerStation_Outline;
    int32 PowerStationIndex;
    bool Destroyed;
    UTexture2D* StationWorking;
    UTexture2D* StationWorkingOutline;
    UTexture2D* StationDestroyed;
    UTexture2D* StationDestroyedOutline;
    UTexture2D* Cable;
    UTexture2D* CableOutline;
    bool Connected;
    bool HasBeenConnected;
    bool HackingPodCalled;
    UFacilityObjective* FacilityObjective;
    ABP_Facility_PowerStation_GeneratorBase_C* Generator;
    UTexture2D* HackingPod;
    UTexture2D* HackingPodOutline;

    void Set Data(bool InDestroyed, bool InConnected, bool InHasBeenConnected, bool InHackingPodCalled, bool HackingNeedsActivate, bool HackingStopped, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, bool Temp_bool_Variable_1, uint8 Temp_byte_Variable_2, uint8 Temp_byte_Variable_3, bool Temp_bool_Variable_2, uint8 Temp_byte_Variable_4, bool Temp_bool_Variable_3, uint8 Temp_byte_Variable_5, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable_6, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, float K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_ToggleAnimationLooping_OutPlayingChanged, bool CallFunc_ToggleAnimationLooping_OutIsPlaying, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_7, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, bool CallFunc_SelectVisibility_IsVisible_2, bool CallFunc_SelectVisibility_VisibilityChanged_2, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_2, uint8 K2Node_Select_Default_1, uint8 K2Node_Select_Default_2, uint8 K2Node_Select_Default_3, uint8 K2Node_Select_Default_4, UTexture2D* K2Node_Select_Default_5, UTexture2D* K2Node_Select_Default_6);
    void TryGetGenerator(TArray<UBP_Facility_PowerStation_ShieldGenerator_C*> Shields, TArray<AFacilityShieldGenerator*> ShieldsOld, UBP_Facility_PowerStation_ShieldGenerator_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, TArray<UBP_Facility_PowerStation_ShieldGenerator_C*>& CallFunc_GetAllActorsOfClass_OutActors, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
    void Refresh(bool CallFunc_IsValid_ReturnValue, USingleUsableComponent* CallFunc_GetCallOverchargerUsable_Usable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsHacked_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void SetObjective(UObjective* obj);
    void SetGenerator(UBP_Facility_PowerStation_GeneratorBase_C* InGenerator);
    void PowerChanged_Event(bool hasPower);
    void OnShieldGeneratorCharged(UBP_Facility_PowerStation_GeneratorBase_C* Generator);
    void Construct();
    void OnOverChargerCalled(bool CanUse);
    void PowerChanged_Event_0(bool hasPower);
    void ExecuteUbergraph_UI_Facility_Objective_PowerStation(int32 EntryPoint, bool K2Node_CustomEvent_HasPower, PowerChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate, OnShieldGeneratorCharged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UsableChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, PowerChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, bool K2Node_Event_IsDesignTime, UObjective* K2Node_Event_obj, UBP_Facility_PowerStation_GeneratorBase_C* K2Node_CustomEvent_InGenerator, UFacilityObjective* K2Node_DynamicCast_AsFacility_Objective, bool K2Node_DynamicCast_bSuccess, bool K2Node_CustomEvent_HasPower_1, UBP_Facility_PowerStation_GeneratorBase_C* K2Node_CustomEvent_Generator, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_CustomEvent_canUse, USingleUsableComponent* CallFunc_GetCallOverchargerUsable_Usable);
}

#endif
