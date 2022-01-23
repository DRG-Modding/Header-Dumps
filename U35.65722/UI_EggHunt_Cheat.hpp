#ifndef UE4SS_SDK_UI_EggHunt_Cheat_HPP
#define UE4SS_SDK_UI_EggHunt_Cheat_HPP

class UUI_EggHunt_Cheat_C : public UUI_MissionCheat_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* Left;
    TArray<class ABP_AlienEgg_C*> Eggs;
    TArray<class UCheatMenu_BasicButtonWText_C*> EggButtons;

    void Construct();
    void CustomEvent_1(class UCheatMenu_BasicButtonWText_C* Button);
    void ExecuteUbergraph_UI_EggHunt_Cheat(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, FString CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABP_AlienEgg_C*>& CallFunc_GetAllActorsOfClass_OutActors, class UCheatMenu_BasicButtonWText_C* K2Node_CustomEvent_Button, int32 CallFunc_Array_Find_ReturnValue, class ABP_AlienEgg_C* CallFunc_Array_Get_Item, FExecuteUbergraph_UI_EggHunt_CheatK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UCheatMenu_BasicButtonWText_C* CallFunc_CreateButton_ReturnValue);
};

#endif
