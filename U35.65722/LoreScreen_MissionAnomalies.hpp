#ifndef UE4SS_SDK_LoreScreen_MissionAnomalies_HPP
#define UE4SS_SDK_LoreScreen_MissionAnomalies_HPP

class ULoreScreen_MissionAnomalies_C : public ULoreScreen_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ULore_Container_WindowTextAndIcon_C* Lore_Container_WindowTextAndIcon;
    class ULore_Container_WindowTextAndIcon_C* Lore_Container_WindowTextAndIcon_C_0;
    class ULore_Container_WindowTextAndIcon_C* Lore_Container_WindowTextAndIcon_C_1;
    class ULoreScreen_Template_C* LoreScreen_Template;
    class UScrollBox* ScrollBox_List;
    class UUniformGridPanel* UniformGridPanel_ItemHolder;
    class UAudioComponent* HoverSound;

    void Construct();
    void RefreshContent();
    void ExecuteUbergraph_LoreScreen_MissionAnomalies(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const FLinearColor Temp_struct_Variable, class ULore_Container_WindowTextAndIcon_C* CallFunc_Create_ReturnValue, class UGameData* CallFunc_GetFSDGameData_ReturnValue, class UMissionMutator* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue);
};

#endif
