#ifndef UE4SS_SDK_WND_SaveGame_Browser_HPP
#define UE4SS_SDK_WND_SaveGame_Browser_HPP

class UWND_SaveGame_Browser_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_ButtonScalable2_C* CloseButton;
    UVerticalBox* EntryParent;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WND_SaveGame_Browser(int32 EntryPoint, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UUI_SaveGame_Entry_C* CallFunc_Create_ReturnValue, bool K2Node_Event_IsDesignTime, int32 Temp_int_Variable, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
}

#endif
