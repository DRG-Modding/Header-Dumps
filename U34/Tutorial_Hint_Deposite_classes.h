// BlueprintGeneratedClass Tutorial_Hint_Deposite.Tutorial_Hint_Deposite_C
// Size: 0x17c (Inherited: 0x170)
struct UTutorial_Hint_Deposite_C : UTutorialHintComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)
	float FirstTimeDelay; // 0x178(0x04)

	void OnResourceFull(struct UCappedResource* Resource); // Function Tutorial_Hint_Deposite.Tutorial_Hint_Deposite_C.OnResourceFull
	void OnCallDonkey(); // Function Tutorial_Hint_Deposite.Tutorial_Hint_Deposite_C.OnCallDonkey
	void ReceiveOnInitialized(); // Function Tutorial_Hint_Deposite.Tutorial_Hint_Deposite_C.ReceiveOnInitialized
	void DepositEnd(struct UResourceBank* ResourceBank); // Function Tutorial_Hint_Deposite.Tutorial_Hint_Deposite_C.DepositEnd
	void ExecuteUbergraph_Tutorial_Hint_Deposite(int32_t EntryPoint); // Function Tutorial_Hint_Deposite.Tutorial_Hint_Deposite_C.ExecuteUbergraph_Tutorial_Hint_Deposite
};

