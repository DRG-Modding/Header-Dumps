#ifndef UE4SS_SDK_ITM_CurrentSaveSlot_Resources_HPP
#define UE4SS_SDK_ITM_CurrentSaveSlot_Resources_HPP

class UITM_CurrentSaveSlot_Resources_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UITM_TopBar_ResourceCounter_C* CreditsCounter;
    class UVerticalBox* VerticalBox_0;
    TArray<class UResourceData*> Resources;
    TMap<class UResourceData*, class UITM_TopBar_ResourceCounter_C*> ResourceWidgets;
    bool IsDesignTime;

    void UpdateResourceAmount(class UFSDSaveGame* SaveSlot, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UResourceData* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetResourceAmount_ReturnValue, class UITM_TopBar_ResourceCounter_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
    void AddResource(class UResourceData* InResource, bool InHideWhenZero, int32 Index, class UITM_TopBar_ResourceCounter_C* ResourceWidget, bool Temp_bool_Variable, float Temp_float_Variable, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_Map_Contains_ReturnValue, float CallFunc_GetResourceAmount_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_Select_Default, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UITM_TopBar_ResourceCounter_C* CallFunc_Create_ReturnValue);
    void SetResources(TArray<class UResourceData*>& InResources, class UITM_TopBar_ResourceCounter_C* CurrentWidget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UResourceData* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_CurrentSaveSlot_Resources(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

#endif
