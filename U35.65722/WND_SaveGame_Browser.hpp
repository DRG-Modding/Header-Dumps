#ifndef UE4SS_SDK_WND_SaveGame_Browser_HPP
#define UE4SS_SDK_WND_SaveGame_Browser_HPP

class UWND_SaveGame_Browser_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ButtonScalable2_C* CloseButton;
    class UVerticalBox* EntryParent;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WND_SaveGame_Browser(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_SaveGame_Entry_C* CallFunc_Create_ReturnValue, bool K2Node_Event_IsDesignTime, int32 Temp_int_Variable, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

#endif
