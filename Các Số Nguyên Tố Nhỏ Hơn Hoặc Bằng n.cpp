int SNT_nhohonhoacbang_n(int n) // Tìm các số nguyên tố nhỏ hơn hoặc bằng n
{
    cout << "Cac so nguyen to nho hon hoac bang n: "; // xuất ra màn hình dòng chữ trong ngoặc
    for (int i = 1; i <= n; i++) { // cho i chạy từ 1 đến n, tăng i lên từng đơn vị
        if (KTSNT(i) == true) cout << i << " "; // số nào thỏa điều kiện của số nguyên tố, nhận và xuất ra màn hình
    }
    cout << endl; // xuống dòng
}
