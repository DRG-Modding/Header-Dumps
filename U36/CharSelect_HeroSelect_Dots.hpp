#ifndef UE4SS_SDK_CharSelect_HeroSelect_Dots_HPP
#define UE4SS_SDK_CharSelect_HeroSelect_Dots_HPP

class UCharSelect_HeroSelect_Dots_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Dot0;
    class UImage* Dot1;
    class UImage* Dot2;
    class UImage* Dot3;
    class UHorizontalBox* PlayerDotBox;
    class UPlayerCharacterID* CharacterClass;
    TArray<class UImage*> PlayerDots;

    void UpdateDots();
    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Set Character Class(class UPlayerCharacterID* CharacterClass);
    void Construct();
    void ExecuteUbergraph_CharSelect_HeroSelect_Dots(int32 EntryPoint);
};

#endif
