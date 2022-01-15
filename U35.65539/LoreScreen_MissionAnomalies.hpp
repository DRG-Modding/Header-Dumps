#ifndef UE4SS_SDK_LoreScreen_MissionAnomalies_HPP
#define UE4SS_SDK_LoreScreen_MissionAnomalies_HPP

class ULoreScreen_MissionAnomalies_C : ULoreScreen_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    ULore_Container_WindowTextAndIcon_C* Lore_Container_WindowTextAndIcon;
    ULore_Container_WindowTextAndIcon_C* Lore_Container_WindowTextAndIcon_C_0;
    ULore_Container_WindowTextAndIcon_C* Lore_Container_WindowTextAndIcon_C_1;
    ULoreScreen_Template_C* LoreScreen_Template;
    UScrollBox* ScrollBox_List;
    UUniformGridPanel* UniformGridPanel_ItemHolder;
    UAudioComponent* HoverSound;

    void Construct();
    void RefreshContent();
    void ExecuteUbergraph_LoreScreen_MissionAnomalies(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const FLinearColor Temp_struct_Variable, ULore_Container_WindowTextAndIcon_C* CallFunc_Create_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue, UMissionMutator* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue);
}

#endif
