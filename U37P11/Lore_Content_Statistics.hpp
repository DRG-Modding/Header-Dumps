#ifndef UE4SS_SDK_Lore_Content_Statistics_HPP
#define UE4SS_SDK_Lore_Content_Statistics_HPP

class ULore_Content_Statistics_C : public UUserWidget
{
    class ULore_Content_ProgressBar_C* Bar_Damage;
    class ULore_Content_ProgressBar_C* Bar_Health;
    class ULore_Content_ProgressBar_C* Bar_Speed;
    class ULore_Content_Weaknesses_C* Lore_Content_Resistances;
    class ULore_Content_Weaknesses_C* Lore_Content_Weaknesses;

    void SetData(class UEnemyMinersManualData* enemy, const TArray<FDamageTypeDescription>& WeaknessesIcons, const TArray<FDamageTypeDescription>& ResistancesIcons);
};

#endif
