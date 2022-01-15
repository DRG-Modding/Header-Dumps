#ifndef UE4SS_SDK_ITM_CurrentSaveSlot_Resources_HPP
#define UE4SS_SDK_ITM_CurrentSaveSlot_Resources_HPP

class UITM_CurrentSaveSlot_Resources_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UITM_TopBar_ResourceCounter_C* CreditsCounter;
    UVerticalBox* VerticalBox_0;
    TArray<UResourceData*> Resources;
    TMap<UResourceData*, UITM_TopBar_ResourceCounter_C*> ResourceWidgets;
    bool IsDesignTime;

    void UpdateResourceAmount(UFSDSaveGame* SaveSlot, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UResourceData* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetResourceAmount_ReturnValue, UITM_TopBar_ResourceCounter_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
    void AddResource(UResourceData* InResource, bool InHideWhenZero, int32 Index, UITM_TopBar_ResourceCounter_C* ResourceWidget, bool Temp_bool_Variable, float Temp_float_Variable, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_Map_Contains_ReturnValue, float CallFunc_GetResourceAmount_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_Select_Default, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UITM_TopBar_ResourceCounter_C* CallFunc_Create_ReturnValue);
    void SetResources(TArray<UResourceData*>& InResources, UITM_TopBar_ResourceCounter_C* CurrentWidget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UResourceData* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_CurrentSaveSlot_Resources(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
