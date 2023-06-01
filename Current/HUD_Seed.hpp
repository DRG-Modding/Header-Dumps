#ifndef UE4SS_SDK_HUD_Seed_HPP
#define UE4SS_SDK_HUD_Seed_HPP

class UHUD_Seed_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* SeedLabel;
    bool IsModded;

    void SetDepth(int32 NewDepth);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_Seed(int32 EntryPoint);
};

#endif
