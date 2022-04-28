#ifndef UE4SS_SDK_UI_SaveGame_Entry_HPP
#define UE4SS_SDK_UI_SaveGame_Entry_HPP

class UUI_SaveGame_Entry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_MenuLabel_C* Basic_MenuLabel;
    class UHorizontalBox* CharacterBox;
    class UBasic_MenuLabel_C* FilenameLabel;
    class UUI_SaveGame_CharacterClass_C* UI_SaveGame_CharacterClass;
    class UUI_SaveGame_CharacterClass_C* UI_SaveGame_CharacterClass_0;
    class UUI_SaveGame_CharacterClass_C* UI_SaveGame_CharacterClass_1;
    class UUI_SaveGame_CharacterClass_C* UI_SaveGame_CharacterClass_2;
    FString Filename;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_SaveGame_Entry(int32 EntryPoint);
};

#endif
