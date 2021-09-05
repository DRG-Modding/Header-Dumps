// BlueprintGeneratedClass Tutorial_Hint_Deposite.Tutorial_Hint_Deposite_C
// Size: 0x17c (Inherited: 0x170)
struct UTutorial_Hint_Deposite_C : UTutorialHintComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)
	float FirstTimeDelay; // 0x178(0x04)

	void OnResourceFull(UCappedResource* Resource);
	void OnCallDonkey();
	void ReceiveOnInitialized();
	void DepositEnd(UResourceBank* ResourceBank);
	void ExecuteUbergraph_Tutorial_Hint_Deposite(int32_t EntryPoint);
};

