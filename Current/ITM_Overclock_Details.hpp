#ifndef UE4SS_SDK_ITM_Overclock_Details_HPP
#define UE4SS_SDK_ITM_Overclock_Details_HPP

class UITM_Overclock_Details_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* LineBox;
    class UItemUpgrade* Upgrade;
    int32 FontSize;
    int32 Linespace;

    void Clear();
    void AddStat(FItemUpgradeStatText InStat);
    void SetData(class UItemUpgrade* InUpgrade);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_Overclock_Details(int32 EntryPoint);
};

#endif
