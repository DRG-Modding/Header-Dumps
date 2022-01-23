#ifndef UE4SS_SDK_HUD_BoscoAbillityCounter_HPP
#define UE4SS_SDK_HUD_BoscoAbillityCounter_HPP

class UHUD_BoscoAbillityCounter_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* FlareBox;
    TArray<class UHUD_BoscoAbillityIcon_C*> Icons;
    bool Loaded;

    void CreateIcons(int32 IconCount, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, FMargin K2Node_MakeStruct_Margin, class UBoscoAbillityComponent* CallFunc_GetPlayerAbillity_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 Temp_int_Variable, class UHUD_BoscoAbillityIcon_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnItemsLoaded();
    void OnAbillityChargeProgress(float aProgress, int32 aNextIndex);
    void OnBoscoChanged(class ABosco* Bosco);
    void ExecuteUbergraph_HUD_BoscoAbillityCounter(int32 EntryPoint, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UBoscoAbillityComponent* CallFunc_GetPlayerAbillity_ReturnValue, int32 CallFunc_GetMaxCharges_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float K2Node_CustomEvent_aProgress, int32 K2Node_CustomEvent_aNextIndex, class UHUD_BoscoAbillityIcon_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, class ABosco* K2Node_CustomEvent_Bosco, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, FExecuteUbergraph_HUD_BoscoAbillityCounterK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_HUD_BoscoAbillityCounterK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1);
};

#endif
