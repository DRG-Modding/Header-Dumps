#ifndef UE4SS_SDK_ITM_RestoreSave_Resources_HPP
#define UE4SS_SDK_ITM_RestoreSave_Resources_HPP

class UITM_RestoreSave_Resources_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* ParentBox;
    class UHorizontalBox* ParentBox2;
    TArray<class UResourceData*> Resources;
    TMap<class UResourceData*, class UITM_TopBar_ResourceCounter_C*> ResourceWidgets;
    bool IsDesignTime;

    void AddResource(class UResourceData* InResource, bool InHideWhenZero, int32 Index, class UITM_TopBar_ResourceCounter_C* ResourceWidget, bool Temp_bool_Variable, float Temp_float_Variable, bool CallFunc_Less_IntInt_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_Map_Contains_ReturnValue, float CallFunc_GetResourceAmount_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_Select_Default, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UITM_TopBar_ResourceCounter_C* CallFunc_Create_ReturnValue);
    void SetResources(TArray<class UResourceData*>& InResources, class UITM_TopBar_ResourceCounter_C* CurrentWidget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UResourceData* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnResourceAmountChanged(class UResourceData* Resource, float currentAmount);
    void ExecuteUbergraph_ITM_RestoreSave_Resources(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FExecuteUbergraph_ITM_RestoreSave_ResourcesK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, class UResourceData* K2Node_CustomEvent_resource, float K2Node_CustomEvent_currentAmount, class UITM_TopBar_ResourceCounter_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
};

#endif
