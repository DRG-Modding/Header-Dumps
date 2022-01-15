#ifndef UE4SS_SDK_HUD_BoscoAbillityCounter_HPP
#define UE4SS_SDK_HUD_BoscoAbillityCounter_HPP

class UHUD_BoscoAbillityCounter_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UHorizontalBox* FlareBox;
    TArray<UHUD_BoscoAbillityIcon_C*> Icons;
    bool Loaded;

    void CreateIcons(int32 IconCount, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, FMargin K2Node_MakeStruct_Margin, UBoscoAbillityComponent* CallFunc_GetPlayerAbillity_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 Temp_int_Variable, UHUD_BoscoAbillityIcon_C* CallFunc_Create_ReturnValue, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnItemsLoaded();
    void OnAbillityChargeProgress(float aProgress, int32 aNextIndex);
    void OnBoscoChanged(UBosco* Bosco);
    void ExecuteUbergraph_HUD_BoscoAbillityCounter(int32 EntryPoint, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UBoscoAbillityComponent* CallFunc_GetPlayerAbillity_ReturnValue, int32 CallFunc_GetMaxCharges_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float K2Node_CustomEvent_aProgress, int32 K2Node_CustomEvent_aNextIndex, UHUD_BoscoAbillityIcon_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, UBosco* K2Node_CustomEvent_Bosco, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, BoscoChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate, ABillityChargeProgress__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1);
}

#endif
