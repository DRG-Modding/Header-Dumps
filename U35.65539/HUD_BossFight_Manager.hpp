#ifndef UE4SS_SDK_HUD_BossFight_Manager_HPP
#define UE4SS_SDK_HUD_BossFight_Manager_HPP

class UHUD_BossFight_Manager_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    USizeBox* BarSize;
    UHorizontalBox* EntryBox;
    float MinDesiredWidth;
    TSubclassOf<UHUD_BossFight_BaseEntry_C> DefaultClassReference;
    int32 PreviewEntries;
    bool IsPreviewing;

    void AddBossFight(const InterfaceProperty& BossFight, FSlateChildSize K2Node_MakeStruct_SlateChildSize, bool Temp_bool_Variable, TSubclassOf<UBossFightWidget> CallFunc_GetWidgetClass_ReturnValue, UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, TSubclassOf<UBossFightWidget> K2Node_Select_Default, bool CallFunc_IsStillValid_ReturnValue, UBossFightWidget* CallFunc_Create_ReturnValue, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue);
    void OnLoaded_7CEF0B6F41A50A9529F16780A3E45EE9(TSubclassOf<UObject> Loaded);
    void Construct();
    void OnNewBossFight(const InterfaceProperty& BossFight);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_BossFight_Manager(int32 EntryPoint, TSubclassOf<UObject> Temp_class_Variable, BossFightDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, TSubclassOf<UHUD_BossFight_BaseEntry_C> K2Node_ClassDynamicCast_AsHUD_Boss_Fight_Base_Entry, bool K2Node_ClassDynamicCast_bSuccess, UBossFightSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, TSubclassOf<UObject> K2Node_CustomEvent_Loaded, InterfaceProperty CallFunc_Array_Get_Item, const InterfaceProperty K2Node_CustomEvent_BossFight, bool K2Node_Event_IsDesignTime, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, TSubclassOf<UObject> CallFunc_LoadClass_ReturnValue, TSubclassOf<UHUD_BossFight_BaseEntry_C> K2Node_ClassDynamicCast_AsHUD_Boss_Fight_Base_Entry_1, bool K2Node_ClassDynamicCast_bSuccess_1, OnAssetClassLoaded__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FBossFight K2Node_MakeStruct_BossFight, UObject* CallFunc_GetOuterObject_ReturnValue, USimpleBossFight* CallFunc_SpawnObject_ReturnValue, const InterfaceProperty CallFunc_AddBossFight_BossFight_CastInput);
}

#endif
