#ifndef UE4SS_SDK_HUD_PlayerClass_Label_HPP
#define UE4SS_SDK_HUD_PlayerClass_Label_HPP

class UHUD_PlayerClass_Label_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* DATA_ClassName;
    class UInvalidationBox* InvalidationBox_0;

    void UpdateCharacterName();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_PlayerClass_Label(int32 EntryPoint);
};

#endif
