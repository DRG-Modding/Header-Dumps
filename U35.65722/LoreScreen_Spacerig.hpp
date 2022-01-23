#ifndef UE4SS_SDK_LoreScreen_Spacerig_HPP
#define UE4SS_SDK_LoreScreen_Spacerig_HPP

class ULoreScreen_Spacerig_C : public ULoreScreen_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton_Spacerig_Map_Circle_C* AbyssBar;
    class UButton_Spacerig_Map_Circle_C* AssignmentTerminal;
    class UCanvasPanel* CanvasPanel_Holder;
    class UButton_Spacerig_Map_Circle_C* DeepDives;
    class UButton_Spacerig_Map_Circle_C* DroneModification;
    class UButton_Spacerig_Map_Circle_C* DropPod;
    class UButton_Spacerig_Map_Circle_C* Equipment;
    class UButton_Spacerig_Map_Circle_C* Forge;
    class UImage* Image_167;
    class UButton_Spacerig_Map_Circle_C* Jukebox;
    class ULoreScreen_Template_C* LoreScreen_Template;
    class UButton_Spacerig_Map_Circle_C* MedicalFacility;
    class UButton_Spacerig_Map_Circle_C* MemorialHall;
    class UButton_Spacerig_Map_Circle_C* MineralTrade;
    class UButton_Spacerig_Map_Circle_C* MissionTerminal;
    class UButton_Spacerig_Map_Circle_C* PersonalCabin3;
    class UButton_Spacerig_Map_Circle_C* pickAxe;
    class UButton_Spacerig_Map_Circle_C* SeasonTerminal;
    class UButton_Spacerig_Map_Circle_C* Shop;
    class ULore_Container_PictureOverText_C* TerminalDescriptino;
    class UButton_Spacerig_Map_Circle_C* WardRobe1;
    class UAudioComponent* HoverSound;
    float Xmin;
    float Xmax;
    float Ymin;
    float Ymax;
    bool HasHovered;
    class UButton_Spacerig_Map_Circle_C* ActiveButton;

    void Construct();
    void RefreshContent();
    void OnHover(class UButton_Spacerig_Map_Circle_C* Button, class UMinersManualData* Data);
    void PlayButtonPings();
    void OnUnhover(class UButton_Spacerig_Map_Circle_C* Button);
    void ExecuteUbergraph_LoreScreen_Spacerig(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UButton_Spacerig_Map_Circle_C* K2Node_CustomEvent_Button_1, class UMinersManualData* K2Node_CustomEvent_Data, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_GetGlobalTimeDilation_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_1, TArray<class UButton_Spacerig_Map_Circle_C*>& K2Node_MakeArray_Array, bool CallFunc_Less_IntInt_ReturnValue, class UButton_Spacerig_Map_Circle_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, float CallFunc_GetGlobalTimeDilation_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_IntFloat_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UButton_Spacerig_Map_Circle_C* K2Node_CustomEvent_Button, class UWidget* CallFunc_Array_Get_Item_1, class UButton_Spacerig_Map_Circle_C* K2Node_DynamicCast_AsButton_Spacerig_Map_Circle, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, FExecuteUbergraph_LoreScreen_SpacerigK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_LoreScreen_SpacerigK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
};

#endif
