#ifndef UE4SS_SDK_ITM_TopBar_Resources_HPP
#define UE4SS_SDK_ITM_TopBar_Resources_HPP

class UITM_TopBar_Resources_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* ParentBox;
    TArray<class UResourceData*> Resources;
    TMap<class UResourceData*, class UITM_TopBar_ResourceCounter_C*> ResourceWidgets;
    bool IsDesignTime;
    bool HideWhenZero;
    bool DoCountAnim;

    void GetResourceAmount(class UResourceData* Resource, float& Amount, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, float CallFunc_GetResourceAmount_ReturnValue);
    void AddResource(class UResourceData* InResource, bool InHideWhenZero, class UITM_TopBar_ResourceCounter_C* ResourceWidget, float CallFunc_GetResourceAmount_Amount, bool CallFunc_Map_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, FMargin K2Node_MakeStruct_Margin, class UITM_TopBar_ResourceCounter_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBoxEx_OutSlot, class UHorizontalBox* CallFunc_AddChildToHorizontalBoxEx_OutHorizontalBox, class UITM_TopBar_ResourceCounter_C* CallFunc_AddChildToHorizontalBoxEx_ReturnValue);
    void SetResources(TArray<class UResourceData*>& InResources, class UITM_TopBar_ResourceCounter_C* CurrentWidget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UResourceData* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void UpdateResourceBehavior(bool HideWhenZero, bool DoCountAnim);
    void ExecuteUbergraph_ITM_TopBar_Resources(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_HideWhenZero, bool K2Node_CustomEvent_DoCountAnim, TArray<class UITM_TopBar_ResourceCounter_C*>& CallFunc_Map_Values_Values, class UITM_TopBar_ResourceCounter_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

#endif
