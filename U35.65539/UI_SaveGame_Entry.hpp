#ifndef UE4SS_SDK_UI_SaveGame_Entry_HPP
#define UE4SS_SDK_UI_SaveGame_Entry_HPP

class UUI_SaveGame_Entry_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_MenuLabel_C* Basic_MenuLabel;
    UHorizontalBox* CharacterBox;
    UBasic_MenuLabel_C* FilenameLabel;
    UUI_SaveGame_CharacterClass_C* UI_SaveGame_CharacterClass;
    UUI_SaveGame_CharacterClass_C* UI_SaveGame_CharacterClass_0;
    UUI_SaveGame_CharacterClass_C* UI_SaveGame_CharacterClass_1;
    UUI_SaveGame_CharacterClass_C* UI_SaveGame_CharacterClass_2;
    FString Filename;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_SaveGame_Entry(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FText CallFunc_Conv_StringToText_ReturnValue);
}

#endif
